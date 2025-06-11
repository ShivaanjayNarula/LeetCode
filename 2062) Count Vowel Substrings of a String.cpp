class Solution {
public:
    int countVowelSubstrings(string word) {
        int n = word.size();
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            unordered_map<char, int> mp;
            for(int j = i; j < n && isVowel(word[j]); j++)
            {
                mp[word[j]]++;
                if(mp.size() == 5)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
    bool isVowel(char ch)
    {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            return true;
        }
        return false;
    }
};
