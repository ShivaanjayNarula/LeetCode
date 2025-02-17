class Solution {
public:
    int getMaximumConsecutive(vector<int>& coins) {
        int n = coins.size();
        sort(coins.begin(), coins.end());
        int ans = 1;
        for(int i = 0; i < n; i++)
        {
            if(coins[i] > ans)
            {
                break;
            }
            ans += coins[i];
        }
        return ans;
    }
};
