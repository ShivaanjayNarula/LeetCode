class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            maxi = max(maxi, nums[i]);
        }
        vector<int> prime(maxi+1, INT_MAX);
        prime[0] = 1;
        prime[1] = 1;
        for(int i = 2; i <= maxi; i++)
        {
            if(prime[i] == INT_MAX)
            {
                for(long long j = (long long)i*i; j > 0 && j <= maxi; j += i)
                {
                    prime[j] = min(prime[j], i);
                }
            }
        }
        int ans = 0;
        for(int i = n-2; i >= 0; i--)
        {
            while(nums[i+1] < nums[i])
            {
                if(prime[nums[i]] == INT_MAX)
                {
                    return -1;
                }
                else
                {
                    nums[i] /= nums[i]/prime[nums[i]];
                    ans++;
                }
            }
        }
        return ans;
    }
};
