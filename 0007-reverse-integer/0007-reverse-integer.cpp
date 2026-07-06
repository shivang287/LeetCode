#include <climits>

class Solution {
public:
    int reverse(int x) {
        // Use long long or double to safely hold the reversed number 
        // without premature overflow during multiplication
        long long rev = 0; 
        
        while (x != 0) {
            int r = x % 10;
            rev = rev * 10 + r;
            x /= 10;
        }
        
        // Check if the reversed integer fits in 32-bit signed integer bounds
        if (rev > INT_MAX || rev < INT_MIN) {
            return 0;
        }
        
        return (int)rev;
    }
};