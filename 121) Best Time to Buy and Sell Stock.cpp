class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int check = prices[0];
        int n = prices.size();
        for(int i = 1; i < n; i++)
        {
            int sum = prices[i] - check;
            profit = max(sum, profit);
            check = min(check, prices[i]);
        }
        return profit;
    }
};
