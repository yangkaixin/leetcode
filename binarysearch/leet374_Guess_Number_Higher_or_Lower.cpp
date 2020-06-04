#include <stdio.h>
#include <vector>

using namespace std;

int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        if (n < 1) {
            return -1;
        }
        
        int left = 1;
        int right = n;
        
        while (left <= right) {
            int mid = left + (right - left) /2 ;
            int res = guess(mid);
            
            if (res == 0) {
                return mid;
            } else if (res == -1) {
                right = mid - 1;
            } else if (res == 1) {
                left = mid + 1;
            }
        }
        return -1;
    }
};
