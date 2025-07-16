class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        vector<unordered_set<string>> st(26);
        for(auto it : ideas)
        {
            st[it[0] - 'a'].insert(it.substr(1));
        }
        long long ans = 0;
        for(int i = 0; i < 26; i++)
        {
            for(int j = i+1; j < 26; j++)
            {
                long common1 = 0;
                long common2 = 0;
                for(auto it : st[i])
                {
                    if(!st[j].count(it))
                    {
                        common1++;
                    }
                }   
                for(auto it : st[j])
                {
                    if(!st[i].count(it))
                    {
                        common2++;
                    }
                }
                ans += 2 * common1 * common2;
            }
        }
        return ans;
    }
};
