class Solution {
public:
    vector<int> fairCandySwap(vector<int>& alice, vector<int>& bob) {
        int n = alice.size();
        int m = bob.size();
        int sum1 = 0;
        int sum2 = 0;
        for(int i = 0; i < n; i++)
        {
            sum1 += alice[i];
        }
        for(int i = 0; i < m; i++)
        {
            sum2 += bob[i];
        }
        vector<int> ans;
        for(int i = n-1; i >= 0; i--)
        {
            for(int j = m-1; j >= 0; j--)
            {
                int check = alice[i] - bob[j];
                if(sum1 - check == sum2 + check)
                {
                    ans.push_back(alice[i]);
                    ans.push_back(bob[j]);
                    return ans;
                }
            }
        }
        return {};
    }
};
