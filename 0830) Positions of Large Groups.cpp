class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> ans;
        int n = s.size();
        for(int i = 0; i < n-1; i++)
        {
            int j = i;
            while(s[j] == s[i+1])
            {
                i++;
            }
            if(i - j + 1 >= 3)
            {
                ans.push_back({j, i});
            }
        }
        return ans;
    }
};
