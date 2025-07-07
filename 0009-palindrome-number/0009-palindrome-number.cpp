class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0) return false;

        int y = 0;
        int z = x;

        while (x != 0) {
            int rem = x % 10;
            y = y * 10 + rem;
            x /= 10;
        }

        return y == z;
        
    }
};