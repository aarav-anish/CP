class Solution {
public:
    static bool cmp(int a, int b) {
        string x = to_string(a);
        string y = to_string(b);
        
        return x + y > y + x;
    }
    
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), cmp);
        string s = "";
        for(int i: nums) {
            s += to_string(i);
        }
        
        int i=0;
        while(i<s.size()-1 && s[i]=='0') {
            i++;
        }
        return s.substr(i);
    }
};