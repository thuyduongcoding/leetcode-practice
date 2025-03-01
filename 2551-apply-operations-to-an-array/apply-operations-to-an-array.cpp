class Solution {
public:
vector<int> applyOperations(vector<int>& nums) {vector<int> result;
for (int i = 0; i < nums.size() ; i++) {if (i < nums.size() - 1 && nums[i] != 0 && nums[i] == nums[i+1]) {result.push_back(nums[i] * 2);i++;
} else if (nums[i] != 0) result.push_back(nums[i]);}
while (nums.size() != result.size()) {result.push_back(0);
}
return result;
}
};