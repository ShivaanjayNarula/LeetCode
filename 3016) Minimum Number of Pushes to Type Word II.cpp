class Solution {
public:
    int minimumPushes(string word) {
        vector<int> freq(26, 0);
        for(auto ch : word)
        {
            freq[ch - 'a']++;
        }
        int ans = 0;
        sort(freq.rbegin(), freq.rend());
        for(int i = 0; i < 26; i++)
        {
            ans += (i/8 + 1) * freq[i];
        }
        return ans;
    }
};
