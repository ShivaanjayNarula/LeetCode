class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int currSum = 0;
        int m = rolls.size();
        for(int i = 0; i < m; i++)
        {
            currSum += rolls[i];
        }
        int missingSum = mean * (n+m) - currSum;
        if(missingSum < n || missingSum > 6 * n)
        {
            return {};
        }
        vector<int> ans(n, missingSum/n);
        for(int i = 0; i < missingSum % n; i++)
        {
            ++ans[i];
        }
        return ans;
    }
};
