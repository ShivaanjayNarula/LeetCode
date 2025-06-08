class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> mp1;
        unordered_map<string, int> mp2;
        for(auto ch : words1)
        {
            mp1[ch]++;
        }
        for(auto ch : words2)
        {
            mp2[ch]++;
        }
        int ans = 0;
        for(auto it : mp1)
        {
            if(it.second == 1 && mp2[it.first] == 1)
            {
                ans++;
            }
        }
        return ans;
    }
};
