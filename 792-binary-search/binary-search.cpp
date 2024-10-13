class Solution {
public:   
    int search(vector<int>& nums, int target) {
        // nums = [1,2,3,4,5]
        // nums = [1,2,3,4], target = 1
        // target]
        return binarySearch(nums, 0, nums.size() - 1, target);
    }

private:
    // Case 1: using iterator
    // int binarySearch(vector<int> & nums, int low, int high, int target) {
    //     while (low <= high) {
    //         int mid = low + (high - low)/2;

    //         if (nums[mid] == target) {
    //             return mid;
    //         }

    //         if (nums[mid] > target) {
    //             high = mid - 1;
    //         } else {
    //             low = mid + 1;
    //         }
    //     }
    //     return -1;
    // }

    // Case 2: using recusion
    int binarySearch(vector<int> &nums, int low, int high, int target) {
        // Base case
        if (low > high) {
            return -1;
        }
        int mid = low + (high-low)/2;
        if (nums[mid] == target) {
            return mid;
        } 
        if (target < nums[mid]) {
            return binarySearch(nums, low, mid - 1, target);
        } else {
            return binarySearch(nums, mid + 1, high, target);
        }
    }
};