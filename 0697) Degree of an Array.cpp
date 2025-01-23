class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, vector<int>> mp;
        for(int i = 0; i < n; i++)
        {
            mp[nums[i]].push_back(i);
        }
        int check = 0;
        for(auto i = mp.begin(); i != mp.end(); i++)
        {
            check = max(check, int(i->second.size()));
        }
        int ans = n;
        for(auto i = mp.begin(); i != mp.end(); i++)
        {
            if(i->second.size() == check)
            {
                ans = min(ans, i->second.back() - i->second[0]+1);
            }
        }
        return ans;
    }
};
