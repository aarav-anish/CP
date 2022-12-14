class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allSubsets;
        int n = 1 << nums.size();
        for(int i=0; i<n; i++) {
            vector<int> currSet;
            int pos = 1;
            for(int j=0; j<nums.size(); j++) {
                pos = pos << j;
                if(pos & i) {
                    currSet.push_back(nums[j]);
                }
                pos = 1;
            }
            allSubsets.push_back(currSet);
        }
        return allSubsets;
    }
};