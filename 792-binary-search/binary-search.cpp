class Solution {
public:   
    int search(vector<int>& nums, int target) {
        // nums = [1,2,3,4,5]
        // nums = [1,2,3,4], target = 1
        // target]
        return binarySearch(nums, 0, nums.size() - 1, target);
    }

private:
    int binarySearch(vector<int> & nums, int low, int high, int target) {
        while (low <= high) {
            int mid = low + (high - low)/2;

            if (nums[mid] == target) {
                return mid;
            }

            if (nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return -1;
    }
};