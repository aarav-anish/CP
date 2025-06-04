class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        
        int n = x;
        int reverse = 0;
        while(n > 0) {
            reverse = reverse * 10 + n % 10;
            n /= 10;
        }
        return x == reverse ? true : false;
    }
};