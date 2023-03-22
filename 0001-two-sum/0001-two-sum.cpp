class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        map<int, int> lookup;
        for(int i=0; i<nums.size(); i++) {
            if(lookup[target - nums[i]]) {
                ans.push_back(lookup[target - nums[i]] - 1);
                ans.push_back(i);
                break;
            }
            lookup[nums[i]] = i+1;
        }
        return ans;
    }
};