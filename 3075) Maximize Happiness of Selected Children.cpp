class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.rbegin(), happiness.rend());
        long long ans = 0;
        int a = 0;
        for(int i = 0; i < k; i++)
        {
            if(a < happiness[i])
            {
                ans += happiness[i] - a;
            }
            a++;
        }
        return ans;
    }
};
