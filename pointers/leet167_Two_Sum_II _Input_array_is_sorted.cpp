#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int length = numbers.size();
        
        int left = 0;
        int right = length - 1;
        
        while (left < right) {
            if (numbers[left] + numbers[right] == target) {
                return {left+1, right+1};
            } else if (numbers[left] + numbers[right] > target) {
                right = right - 1;
            } else {
                left = left + 1;
            }
        }
        
        return {-1, -1};
    }
};
