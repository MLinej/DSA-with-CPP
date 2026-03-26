// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

class Solution {
public:
    int reverse(int x) {
        long int rem=0;
        int m=x;
        while(m!=0)
        {
            if(rem > INT_MAX/10) return 0;
            if(rem < INT_MIN/10) return 0;
            rem=m%10 + rem*10;
            m=m/10;
        }
        return int(rem);
    }
};

// Example 1:

// Input: x = 123
// Output: 321