class Solution {
public:
    bool check(vector<int>& nums) {
        bool change = false;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] < nums[i-1]) {
                if(change) {
                    return false;
                }
                change = true;
            }
        }
        if(change && nums[0] < nums[nums.size() - 1]) {
            return false;
        }
        return true;
    }
};