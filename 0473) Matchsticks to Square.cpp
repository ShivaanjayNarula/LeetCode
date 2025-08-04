class Solution {
public:
    bool makesquare(vector<int>& matchsticks) {
        int n = matchsticks.size();
        int sum = accumulate(matchsticks.begin(), matchsticks.end(), 0);
        if(sum % 4 != 0 || n < 4)
        {
            return false;
        }
        int target = sum / 4;
        int size = 1 << n;
        vector<int> dp(size, -1);
        dp[0] = 0;
        for(int id = 0; id < size; ++id)
        {
            if(dp[id] == -1)
            {
                continue;
            }
            for(int i = 0; i < n; ++i)
            {
                if((id >> i) & 1)
                {
                    continue;
                }
                int next = id | (1 << i);
                if(dp[id] + matchsticks[i] <= target)
                {
                    dp[next] = (dp[id] + matchsticks[i]) % target;
                }
            }
        }
        return dp[size - 1] == 0;
    }
};
