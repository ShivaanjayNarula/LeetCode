class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        int i = 0;
        int j = 0;
        unordered_map<int, int> mp;
        while(i < n)
        {
            mp[nums[i]]++;
            while(mp[nums[i]] > k)
            {
                mp[nums[j]]--;
                j++;
            }
            ans = max(ans, i-j+1);
            i++;
        }
        return ans;
    }
};
