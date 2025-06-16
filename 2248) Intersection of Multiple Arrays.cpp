class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int n = nums.size();
        map<int, int> mp;
        for(auto it1 : nums)
        {
            for(auto it2 : it1)
            {
                mp[it2]++;
            }
        }
        vector<int> ans;
        for(auto it : mp)
        {
            if(it.second == n)
            {
                ans.push_back(it.first);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
