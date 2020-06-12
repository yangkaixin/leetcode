#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int length = nums.size();
        
        if (length < 1) {
            return -1;
        }
        
        if (length == 1) {
            return nums[0] == target ? 0 : -1;
        }
        
        int left = 0;
        int right = length-1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] == target) {
                return mid;
            }
            
            if (nums[left] < nums[mid]) {
                //left part is ordered
                if (nums[left] <= target && target < nums[mid]) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            } else {
                //right part is ordered
                if (nums[mid] < target && target <= nums[right]) {
                    right = mid + 1;
                } else {
                    left = mid - 1;
                }
            }
        }
        
        return -1;
    }
};

