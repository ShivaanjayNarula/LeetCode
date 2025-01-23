class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int ans = 0;
        int n = patterns.size();
        for(int i = 0; i < n; i++)
        {
            if(word.find(patterns[i]) != string::npos)
            {
                ans++;
            }
        }
        return ans;
    }
};
