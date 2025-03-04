class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;
        for(auto i : s)
        {
            mp1[i]++;
        }
        for(auto i : target)
        {
            mp2[i]++;
        }
        int ans = INT_MAX;
        for(auto i : mp2)
        {
            ans = min(ans, mp1[i.first]/i.second);
        }
        return ans;
    }
};
