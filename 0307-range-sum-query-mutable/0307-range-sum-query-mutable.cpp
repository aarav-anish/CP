class NumArray {
public:
    vector<int> seg;
    int n;
    
    NumArray(vector<int>& nums): n(nums.size()), seg(4*nums.size(), 0) {
        n = nums.size();
        build(0, 0, n-1, nums);
    }
    
    void build(int idx, int low, int high, vector<int> &nums) {
        if(low == high) {
            seg[idx] = nums[low];
            return;
        }
        int mid = (high-low)/2 + low;
        build(2*idx+1, low, mid, nums);
        build(2*idx+2, mid+1, high, nums);
        seg[idx] = seg[2*idx+1] + seg[2*idx+2];
    }
    
    int findSum(int idx, int low, int high, int &l, int &r) {
        // does not lie
        if(high < l || low > r) {
            return 0;
        }
        
        // completely lie
        if(low >= l && high <= r) {
            return seg[idx];
        }
        
        // overlaps
        int mid = (high - low)/2 + low;
        return findSum(2*idx+1, low, mid, l, r) + findSum(2*idx+2, mid+1, high, l, r);
    }
    
    void updateTree(int idx, int low, int high, int &node, int &val) {
        if(low == high && low == node) {
            seg[idx] = val;
            return;
        }
        
        int mid = (high - low)/2 + low;
        node <= mid ? updateTree(2*idx+1, low, mid, node, val) : updateTree(2*idx+2, mid+1, high, node, val);
        
        seg[idx] = seg[2*idx+1] + seg[2*idx+2];
    }
    
    void update(int index, int val) {
        updateTree(0, 0, n-1, index, val);
    }
    
    int sumRange(int left, int right) {
        return findSum(0, 0, n-1, left, right);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */