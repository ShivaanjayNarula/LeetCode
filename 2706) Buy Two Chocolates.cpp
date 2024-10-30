class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        int chocolate = prices[0] + prices[1];
        if(chocolate > money)
        {
            return money;
        }
        return money-chocolate;
    }
};
