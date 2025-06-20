class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        vector<int> prefixSum(n+1, 0);
        vector<int> ans;
        set<char> st = {'a', 'e', 'i', 'o', 'u'};
        for(int i = 0; i < n; i++)
        {
            if(st.count(words[i][0]) && st.count(words[i].back()))
            {
                prefixSum[i+1] = prefixSum[i] + 1;
            }
            else
            {
                prefixSum[i+1] = prefixSum[i];
            }
        }
        for(auto it : queries)
        {
            int left = it[0];
            int right = it[1];
            ans.push_back(prefixSum[right+1] - prefixSum[left]);
        }
        return ans;
    }
};
