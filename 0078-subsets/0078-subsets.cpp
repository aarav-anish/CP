class Solution {
public:
    void findSubsets(vector<int>& nums, vector<int> curr, vector<vector<int>> &allSubsets, int i) {
        if(i>=nums.size()) {
            allSubsets.push_back(curr);
            return;
        }
        curr.push_back(nums[i]);
        findSubsets(nums, curr, allSubsets, i+1);
        curr.pop_back();
        findSubsets(nums, curr, allSubsets, i+1);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allSubsets;
        vector<int> curr;
        findSubsets(nums, curr, allSubsets, 0);
        return allSubsets;
    }
};