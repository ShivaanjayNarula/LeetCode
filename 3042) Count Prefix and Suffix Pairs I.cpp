class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                if(helper(words[i], words[j]))
                {
                    ans++;
                }
            }
        }
        return ans;
    }
    bool helper(string s1, string s2)
    {
        int n1 = s1.size();
        int n2 = s2.size();
        if(n1 > n2)
        {
            return false;
        }
        if(s2.substr(0, n1) == s1 && s2.substr(n2-n1) == s1)
        {
            return true;
        }
        return false;
    }
};
