class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> dup(nums);
        sort(dup.begin(), dup.end());
        
        int l = 0, r = nums.size()-1;
        for(int i=0; i<nums.size(); i++) {
            l = i;
            if(nums[i]!=dup[i]) {
                break;
            }
        }
        for(int i=nums.size()-1; i>=0; i--) {
            r = i;
            if(nums[i]!=dup[i]) {
                break;
            }
        }
        if(r-l <= 0)
            return 0;
        return r-l+1;
    }
};