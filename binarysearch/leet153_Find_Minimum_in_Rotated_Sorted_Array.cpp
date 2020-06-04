class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        
        while (left<right) {
            int mid = left + (right-left)/2;
            //与右边界比较，决定收缩的方向，左边界不一定
            if (nums[mid] > nums[right]) {
                left = mid+1;
            } else {
                right = mid;
            } 
        }
        return nums[left];
    }
};
