class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int arrow = INT_MIN, ans = 0;
        sort(points.begin(), points.end());
        
        for(int i=0; i<points.size(); i++) {
            if(ans==0 || points[i][0] > arrow) {
                arrow = points[i][1];
                ans++;
            }
            else if(points[i][1] < arrow)
                arrow = points[i][1];
        }
        return ans;
    }
};