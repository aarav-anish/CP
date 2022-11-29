class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<=1)
            return nums.size();
        
        unordered_set<int> st;
        for(auto i: nums) {
            st.insert(i);
        }
        int cnt = 0, ans = 0;
        for(auto i: st) {
            if(st.find(i-1)==st.end()) {
                cnt = 0;
                while(st.find(i++)!=st.end())
                    cnt++;
                ans = max(cnt, ans);
            }
        }
        return ans;
    }
};