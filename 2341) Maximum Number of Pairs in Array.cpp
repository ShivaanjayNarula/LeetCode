class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto i : nums)
        {
            mp[i]++;
        }
        int a = 0;
        int b = 0;
        for(auto i : mp)
        {
            a += i.second/2;
            b += i.second%2;
        }
        return {a, b};
    }
};
