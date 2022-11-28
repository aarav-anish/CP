class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        
        for(int i=0; i<nums.size()-2; i++){
            while(i!=0 && i<nums.size()-2 && nums[i]==nums[i-1])
                i++;
            
            int l = i+1, r = nums.size()-1;
            while(l<r) {
                if(nums[l]+nums[r] == -nums[i]) {
                    ans.push_back({nums[i], nums[l], nums[r]});
                    while(l<r && nums[l]==nums[l+1])
                        l++;
                    while(l<r && nums[r]==nums[r-1])
                        r--;
                    l++;
                    r--;
                }
                else if(nums[l] + nums[r] < -nums[i]) {
                    l++;
                }
                else 
                    r--;
            }
        }
        return ans;
    }
};