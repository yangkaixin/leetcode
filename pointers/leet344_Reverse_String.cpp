#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int length = s.size();
    
        int left = 0;
        int right = length - 1;
        
        char tmp;
        
        while (left < right) {
            tmp = s[left];
            s[left] = s[right];
            s[right] = tmp;
            
            left += 1;
            right -= 1;
        }
    }
};
