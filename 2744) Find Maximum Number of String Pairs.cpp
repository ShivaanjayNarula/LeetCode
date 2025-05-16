class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size();
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                reverse(words[j].begin(), words[j].end());
                if(words[i] == words[j])
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};
