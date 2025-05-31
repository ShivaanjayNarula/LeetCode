class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        int modulo = 1e9 + 7;
        vector<int> check;
        for(int i = 0; i < n; i++)
        {
            int sum = 0;
            for(int j = i; j < n; j++)
            {
                sum += nums[j];
                check.push_back(sum);
            }
        }
        sort(check.begin(), check.end());
        int ans = 0;
        for(int i = left-1; i < right; i++)
        {
            ans = (ans +check[i]) % modulo;
        }
        return ans;
    }
};
