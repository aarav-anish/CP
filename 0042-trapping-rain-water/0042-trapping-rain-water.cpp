class Solution {
public:
    int trap(vector<int>& height) {
        int lmax = 0, rmax = 0, water = 0, n = height.size();
        int left[n], right[n];
        
        for(int i=0; i<n; i++) {
            lmax = max(height[i], lmax);
            left[i] = lmax;
        }
        for(int i=n-1; i>=0; i--) {
            rmax = max(height[i], rmax);
            right[i] = rmax;
        }
        
        for(int i=1; i<n-1; i++) {
            water += min(left[i], right[i]) - height[i];
        }
        return water;
    }
};