class Solution {
public:
    int minimumLines(vector<vector<int>>& stockPrices) {
        int n = stockPrices.size();
        if(n <= 1)
        {
            return 0;
        }
        sort(stockPrices.begin(), stockPrices.end());
        int ans = 1;
        for(int i = 2; i < n; i++)
        {
            long long x1 = stockPrices[i-2][0];
            long long y1 = stockPrices[i-2][1];
            long long x2 = stockPrices[i-1][0];
            long long y2 = stockPrices[i-1][1];
            long long x3 = stockPrices[i][0];
            long long y3 = stockPrices[i][1];
            if((y3 - y2) * (x2 - x1) != (y2 - y1) * (x3 - x2))
            {
                ans++;
            }
        }
        return ans;
    }
};
