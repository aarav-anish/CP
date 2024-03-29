class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int l=0, r=0;
        set<char> st;
        while(r < s.size()) {
            while(st.find(s[r]) != st.end()) {
                st.erase(s[l++]);
            }
            ans = max(r-l+1, ans);
            st.insert(s[r++]);
        }
        return ans;
    }
};