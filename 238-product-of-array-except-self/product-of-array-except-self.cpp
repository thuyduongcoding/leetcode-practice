class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer;
        
        vector<int> before;
        vector<int> after(nums.size());
        
        before.push_back(1);
        for(int i = 1; i < nums.size(); i++) {
            before.push_back(before[i-1] * nums[i-1]);        
        }
        cout << "test" << endl;

        after[nums.size() - 1] = 1;
        for(int i = 1; i < nums.size(); i++) {
            after[nums.size() - i - 1] = after[nums.size() - i] * nums[nums.size() - i];     
        }
        
        cout << "test_2" << endl;

        for (int i = 0; i< nums.size(); i++) {
            answer.push_back(before[i] * after[i]);
        }
        
        cout << "test_3" << endl;


        return answer;
    }
};