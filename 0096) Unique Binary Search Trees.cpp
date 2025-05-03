class Solution {
public:
    int numTrees(int n) {
        long long ans = 1;
        for(int i = n+1; i <= n*2; i++)
        {
            ans *= i;
            ans /= i-n;
        }
        ans /= n+1;
        return ans;
    }
};
