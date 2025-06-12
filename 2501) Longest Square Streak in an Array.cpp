class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        sort(nums.begin(), nums.end());
        int ans = -1;
        for(int i = 0; i < n; i++)
        {
            int root = sqrt(nums[i]);
            if(root * root == nums[i] && mp.find(root) != mp.end())
            {
                mp[nums[i]] = mp[root]+1;
                ans = max(ans, mp[root] + 1);
            }
            else
            {
                mp[nums[i]] = 1;
            }
        }
        return ans;
    }
};
