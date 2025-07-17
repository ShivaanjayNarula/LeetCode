class Solution {
public:
    long long countOfSubstrings(string word, int k) {
        int n = word.size();
        return helper(word, k) - helper(word, k+1);
    }
    long long helper(string &s, int k)
    {
        int n = s.size();
        long long ans = 0;
        unordered_map<char, int> mp;
        int count = 0;
        int left = 0;
        int right = 0;
        while(right < n)
        {
            if(isVowel(s[right]))
            {
                mp[s[right]]++;
            }
            else
            {
                count++;
            }
            while(mp.size() == 5 && count >= k)
            {
                ans += n - right;
                if(isVowel(s[left]))
                {
                    mp[s[left]]--;
                    if(mp[s[left]] == 0)
                    {
                        mp.erase(s[left]);
                    }
                }
                else
                {
                    count--;
                }
                left++;
            }
            right++;
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
