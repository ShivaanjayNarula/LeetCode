class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> mp;
        for(auto ch : text)
        {
            mp[ch]++;
        }
        int ans = 0;
        while(mp['b'] >= 1 && mp['a'] >= 1 && mp['l'] >= 2 && mp['o'] >= 2 && mp['n'] >= 1)
        {
            ans++;
            mp['b'] -= 1;
            mp['a'] -= 1;
            mp['l'] -= 2;
            mp['o'] -= 2;
            mp['n'] -= 1;
        }
        return ans;
    }
};
