class Solution {
public:
    int maxProfit(vector<int>& prices) {

        if (prices.size() < 1) {return 0;}

        int max_profit = 0; int lowest = INT_MAX;
        for(int i = 0; i < prices.size(); ++i)
        {
            if (prices[i] < lowest) {lowest = prices[i];}
            max_profit = max(prices[i] - lowest, max_profit);
        }

        return max_profit;
    }
};