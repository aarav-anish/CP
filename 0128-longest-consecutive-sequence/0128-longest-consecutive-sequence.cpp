class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<=1)
            return nums.size();
        
        unordered_set<int> st;
        for(int i=0; i<nums.size(); i++) {
            st.insert(nums[i]);
        }
        int cnt = 0, ans = 0;
        for(int i=0; i<nums.size(); i++) {
            if(st.find(nums[i]-1)==st.end()) {
                cnt = 0;
                int curr = nums[i];
                while(st.find(curr++)!=st.end())
                    cnt++;
                ans = max(cnt, ans);
            }
        }
        return ans;
    }
};