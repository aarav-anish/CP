class Solution {
public:
    int reverse(int x) {
        int n = abs(x);
        int ans = 0;
        while(n > 0) {
            if(ans > INT_MAX / 10) {
                return 0;
            }
            ans = ans * 10 + n % 10;
            n /= 10;
        }
        return x > 0 ? ans : -ans;
    }
};