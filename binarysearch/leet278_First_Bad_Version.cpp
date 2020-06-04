#include <stdio.h>

class Solution {
public:
    int firstBadVersion(int n) {
        if (n < 1){
            return -1;
        }
        
        int left = 1;
        int right = n;
        
        while (left < right) {
            int mid  = left + (right-left)/2;
            int res = isBadVersion(mid);
            
            if (res == false){
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        return left;
    }
};
