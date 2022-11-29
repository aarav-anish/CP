class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<=1)
            return nums.size();
        sort(nums.begin(), nums.end());
        
        int prev = nums[0], cnt = 0, ans = 0;
        for(int i=1; i<nums.size(); i++) {
            if(nums[i]-prev == 1) {
                cnt++;
            } else if(nums[i]-prev > 1) {
                ans = max(ans, cnt+1);
                cnt = 0;
            }
            prev = nums[i];
        }
        ans = max(ans, cnt+1);

        return ans;
    }
};