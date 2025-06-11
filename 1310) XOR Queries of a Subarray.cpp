class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
        int add = 0;
        for(auto i : queries)
        {
            int add = 0;
            for(int j = i[0]; j <= i[1]; j++)
            {
                add ^= arr[j];
            }
            ans.push_back(add);
            add = 0;
        }
        return ans;
    }
};
