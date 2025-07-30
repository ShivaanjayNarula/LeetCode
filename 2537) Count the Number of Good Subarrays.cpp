class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        int n = nums.size();
        long long ans = 0;
        long long check = 0;
        unordered_map<int, int> mp;
        int left = 0;
        int right = 0;
        while(right < n)
        {
            check += mp[nums[right]]++;
            while(check >= k)
            {
                ans += n-right;
                mp[nums[left]]--;
                check -= mp[nums[left]];
                left++;
            }
            right++;
        }
        return ans;
    }
};
