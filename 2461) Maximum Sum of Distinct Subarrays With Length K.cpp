class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        long long ans = 0;
        long long check = 0;
        unordered_map<int, int> mp;
        int left = 0;
        int right = 0;
        while(right < n)
        {
            check += nums[right];
            mp[nums[right]]++;
            if(right - left + 1 > k)
            {
                mp[nums[left]]--;
                if(mp[nums[left]] == 0)
                {
                    mp.erase(nums[left]);
                }
                check -= nums[left];
                left++;
            }
            if(mp.size() == k)
            {
                ans = max(ans, check);
            }
            right++;
        }
        return ans;
    }
};
