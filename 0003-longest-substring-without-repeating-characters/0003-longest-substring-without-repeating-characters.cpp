class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        set<char> st;
        for(int i=0; i<s.size(); i++) {
            st.clear();
            for(int j=i ; j<s.size(); j++) {
                if(st.find(s[j]) != st.end())
                    break;
                st.insert(s[j]);
                ans = max(j-i+1, ans);
            }
        }
        return ans;
    }
};