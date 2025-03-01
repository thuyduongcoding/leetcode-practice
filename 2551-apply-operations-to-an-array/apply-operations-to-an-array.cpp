class Solution {
public:
    void swap(int& a, int& b) {
        int temp = a;
        a = b;
        b = temp;
    }
    vector<int> applyOperations(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1 ; i++) {
            if (nums[i] == nums[i+1]) {
                nums[i] = nums[i]*2;
                nums[i+1] = 0;
            }
        }
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] == 0) {
                int j = i;
                while (j < nums.size() - 1 && nums[j+1] != 0) {
                    swap(nums[j], nums[j+1]);
                    j++;
                }
            }
        }
        return nums;
    }
};