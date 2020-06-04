#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int length = nums.size();
        if (length == 1) {
            return -1;
        }
        
        int left = 0;
        int right = length - 1;
        
        while (left <= right) {
            int mid = left + (right-left)/2;
            
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        return -1;
    }
};
