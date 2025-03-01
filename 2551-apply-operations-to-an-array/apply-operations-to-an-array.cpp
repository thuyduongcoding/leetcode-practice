class Solution {
public:
    void swap(int& a, int& b) {
        int temp = a;
        a = b;
        b = temp;
    }
    vector<int> applyOperations(vector<int>& nums) {
        vector<int> result;

        for (int i = 0; i < nums.size() ; i++) {
            if (i < nums.size() - 1 && nums[i] != 0 && nums[i] == nums[i+1]) {
                result.push_back(nums[i] * 2);
                i++;
            } else if (nums[i] != 0) result.push_back(nums[i]);
        }

        while (result.size() != nums.size()) {
            result.push_back(0);
        }

        // for (int i = nums.size() - 1; i >= 0; i--) {
        //     if (nums[i] == 0) {
        //         int j = i;
        //         while (j < nums.size() - 1 && nums[j+1] != 0) {
        //             swap(nums[j], nums[j+1]);
        //             j++;
        //         }
        //     }
        // }
        return result;
    }
};