class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> res;
        for(int x : nums) {
            if (res[x] != 0) return true;
            res[x]++;
        }
        return false;
        
    }
};