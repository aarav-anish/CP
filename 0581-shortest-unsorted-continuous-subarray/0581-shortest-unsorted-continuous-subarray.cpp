class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int sm = 1e9;
        int lr = -1e9;
        
        for(int i=1; i<nums.size(); i++) {
            if(nums[i] < nums[i-1]) {
                lr = max(nums[i-1], lr);
                sm = min(nums[i], sm);
            }
        }
        
        if(sm==1e9)
            return 0;
        
        int l=-1, r=nums.size();
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] > sm) {
                l = i;
                break;
            }
        }
        for(int j=nums.size()-1; j>=0; j--) {
            if(nums[j] < lr) {
                r = j;
                break;
            }
        }
        return r-l+1;
    }
};