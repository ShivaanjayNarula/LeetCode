class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        int mod = 1e9+7;
        unordered_map<int, int> mp;
        long long ans = 0;
        vector<int> nums;
        for(int i = 0; i <= 21; i++)
        {
            nums.push_back(1 << i);
        }
        for(auto i : deliciousness)
        {
            for(auto j : nums)
            {
                if(mp.count(j-i))
                {
                    ans = (ans + mp[j-i]) % mod;
                }
            }
            mp[i]++;
        }
        return ans;
    }
};
