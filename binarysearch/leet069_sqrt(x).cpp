#include <stdio.h>

class Solution {
public:
    int mySqrt(int x) {
        int left = 1;
        int right = x;
        int result = -1;
        
        while (left <= right) {
            int mid = left + (right - left)/2;
            if ((long long)mid * mid <= x) {
                result = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        return result;
    }
};
