class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int, int> merge;
        int m = items1.size();
        int n = items2.size();
        for (int i = 0; i < m; i++)
        {
            merge[items1[i][0]] = items1[i][1];
        }
        for (int j = 0; j < n; j++)
        {
            merge[items2[j][0]] += items2[j][1];
        }
        vector<vector<int>> ans;
        for (auto e:merge)
        {
            ans.push_back({e.first, e.second});
        }
        return ans;
    }
};
