class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<int> nums = score;
        sort(nums.rbegin(), nums.rend());
        unordered_map<int, string> mp;
        for(int i = 0; i < n; i++)
        {
            if(i == 0)
            {
                mp[nums[i]] = "Gold Medal";
            }
            else if(i == 1)
            {
                mp[nums[i]] = "Silver Medal";
            }
            else if(i == 2)
            {
                mp[nums[i]] = "Bronze Medal";
            }
            else
            {
                mp[nums[i]] = to_string(i+1);
            }
        }
        vector<string> ans(n);
        for(int i = 0; i < n; i++)
        {
            ans[i] = mp[score[i]];
        }
        return ans;
    }
};
