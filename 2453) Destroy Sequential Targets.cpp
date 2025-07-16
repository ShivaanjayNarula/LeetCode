class Solution {
public:
    int destroyTargets(vector<int>& nums, int space) {
        int n = nums.size();
        int maxi = INT_MIN;
        int ans = INT_MAX;
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            int rem = nums[i] % space;
            mp[rem]++;
            maxi = max(maxi, mp[rem]);
        }
        for(int i = 0; i < n; i++)
        {
            int rem = nums[i] % space;
            if(maxi == mp[rem])
            {
                ans = min(ans, nums[i]);
            }
        }
        return ans;
    }
};
