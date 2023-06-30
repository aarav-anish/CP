class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int ans = 0;
        unordered_map<int, int> mp;

        for(int e: nums) {
            mp[e]++;
        }
        for(int e: nums) {
            if(mp[e + diff] && mp[e + 2*diff])
                ans++;
        }
        return ans;
    }
};