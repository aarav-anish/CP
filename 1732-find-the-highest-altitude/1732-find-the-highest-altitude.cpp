class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int prev = 0, mx = 0;
        for(int e: gain) {
            prev += e;
            mx = max(mx, prev);
        }
        return mx;
    }
};