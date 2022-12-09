#include<algorithm>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() <= 1) {
            return s.size();
        }
        int ans = 1;
        set<char> st;
        for(int i=0; i<s.size(); i++) {
            st.clear();
            for(int j=i; j<s.size(); j++) {
                if(st.find(s[j])==st.end()) {
                    st.insert(s[j]);
                }
                else {
                    if(st.size() > ans)
                        ans = st.size();
                    break;
                }
            }
            if(st.size() > ans)
                ans = st.size();
        }
        return ans;
    }
};