class Solution {
public:
    int minOperations(int k) {
        int ans = INT_MAX;
        for(int i = 1; i <= k; i++)
        {
            int check;
            check = ceil(k / (i * 1.0));
            ans = min(ans, i - 2 + check);
        }
        return ans;
    }
};
