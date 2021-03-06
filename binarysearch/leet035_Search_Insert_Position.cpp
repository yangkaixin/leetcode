#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int len = nums.size();
        if (len == 0) {
            return 0;
        }
        
        int left = 0;
        int right = nums.size();
        
        while (left<right) {
            int mid = left + (right-left)/2;
            
            if (nums[mid] < target) {
                left = mid + 1;
            } else if (nums[mid] > target) {
                right = mid;
            }
        }
        
        return left;
    }
};
