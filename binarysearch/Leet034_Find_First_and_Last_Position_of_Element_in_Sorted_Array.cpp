#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.empty()) {
            return {-1, -1};
        }
        
        int start = -1;
        int end = -1;
        int len = nums.size();
        
        // 寻找左边边界
        int left = 0;
        int right = len - 1;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] > target) {
                right = mid - 1;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else if (nums[mid] == target) {
                right = mid;
            }
        }
        
        start = (nums[left] == target ? left : -1);
        // 寻找右边界
        left = 0;
        right = len - 1;
        
        while (left < right) {
            int mid = (left + right + 1) / 2; //向上取整数
            if (nums[mid] > target) {
                right = mid - 1;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else if (nums[mid] == target) {
                left = mid;
            }
        }
        
        end = (nums[right] == target ? right : -1);
        
        return {start, end};
    }
};
