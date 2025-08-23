class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        long long ans = 0;
        long long i = 0;
        long long j = 0;
        long long check = 0;
        int maxi = *max_element(nums.begin(), nums.end());
        unordered_map<long long, long long> mp;
        while(i < n)
        {
            if(nums[i] == maxi)
            {
                check++;
            }
            while(check >= k)
            {
                ans += n-i;
                if(nums[j] == maxi)
                {
                    check--;
                }
                j++;
            }
            i++;
        }
        return ans;
    }
};
