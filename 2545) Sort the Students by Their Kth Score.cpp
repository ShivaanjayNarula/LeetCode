class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int n = score.size();
        vector<vector<int>> ans;
        vector<pair<int, vector<int>>> check;
        for(auto i : score)
        {
            check.push_back({i[k], i});
        }
        sort(check.begin(), check.end());
        for(int i = n-1; i >= 0; i--)
        {
            ans.push_back(check[i].second);
        }
        return ans;
    }
};
