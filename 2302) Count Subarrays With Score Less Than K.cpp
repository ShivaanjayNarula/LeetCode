class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long i = 0;
        long long j = 0;
        long long n = nums.size();
        long long ans = 0;
        long long check = 0;
        while(i < n)
        {
            check += nums[i];
            while(check * (i - j + 1) >= k)
            {
                check -= nums[j];
                j++;
            }
            ans += i - j + 1;
            i++;
        }
        return ans;
    }
};
