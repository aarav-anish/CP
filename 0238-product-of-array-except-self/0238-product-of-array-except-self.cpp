class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int l[n], r[n];
        l[0] = nums[0];
        for(int i=1;  i<n; i++) {
            l[i] = nums[i] * l[i-1];
        }

        r[n-1] = nums[n-1];
        for(int i=n-2; i>0; i--) {
            r[i] = nums[i] * r[i+1];
        }

        nums[0] = r[1];
        nums[n-1] = l[n-2];
        for(int i=1; i<n-1; i++) {
            nums[i] = l[i-1] * r[i+1];
        }
        return nums;
    }
};