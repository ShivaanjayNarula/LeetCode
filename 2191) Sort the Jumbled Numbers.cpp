class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        unordered_map<int, int> mp;
        for(auto i : nums)
        {
            if(mp.find(i) == mp.end())
            {
                mp[i] = solve(i, mapping);
            }
        }
        sort(nums.begin(), nums.end(), [&](int a, int b)
        {
            return mp[a] < mp[b];
        });
        return nums;
    }
    int solve(int i, vector<int> &mapping)
    {
        string s = to_string(i);
        int n = s.size();
        for(int i = 0; i < n; i++)
        {
            s[i] = '0' + mapping[s[i] - '0'];
        }
        return stoi(s);
    }
};
