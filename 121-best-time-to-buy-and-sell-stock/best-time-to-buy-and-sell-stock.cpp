class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int max = prices[0];
        int min_id = 0;
        int res = 0;

        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < min) {
                min = prices[i];
                min_id = i;
                max = prices[i];
            } else if (prices[i] > max && i > min_id) {
                max = prices[i];
                if ((max - min) > res) {
                    res = max - min;
                } 
            }
        }
        cout << max << " ";
        cout << min << " ";
        return res;
        
        // if (max == min) {
        //     return 0;
        // } else {
        //     return (max - min);
        // }
    }
};