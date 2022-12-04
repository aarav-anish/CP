class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = -1e9, temp = 0;
        for(int i=0; i<nums.size(); i++) {
            temp += nums[i];
            ans = max(temp, ans);
            temp = max(0, temp);
        }
        return ans;
    }
};