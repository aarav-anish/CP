class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int ans = 0;
        
        for(int i=1; i<arr.size()-1; i++) {
            int cnt = 0;
            if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
                cnt++;
                int prev = i;
                int curr = i-1;
                while(prev > 0 && arr[prev] > arr[curr]) {
                    prev--;
                    curr--;
                    cnt++;
                }
                prev = i;
                curr = i+1;
                while(prev < arr.size()-1 && arr[prev] > arr[curr]) {
                    prev++;
                    curr++;
                    cnt++;
                }
                i = prev;
            }
            ans = max(cnt, ans);
        }
        
        return ans;
    }
};