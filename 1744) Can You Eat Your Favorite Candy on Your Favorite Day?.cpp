class Solution {
public:
    vector<bool> canEat(vector<int>& candiesCount, vector<vector<int>>& queries) {
        int n = candiesCount.size();
        vector<bool> ans;
        vector<long long> prefixSum(n+1, 0);
        for(int i = 0; i < n; i++)
        {
            prefixSum[i+1] = prefixSum[i] + candiesCount[i];
        }
        for(auto &it : queries)
        {
            int type = it[0];
            int day = it[1];
            int capa = it[2];
            long long mini = (long long)day + 1;
            long long maxi = (long long)(day+1) * capa;
            long long start = prefixSum[type];
            long long end = prefixSum[type+1];
            if(mini <= end && start < maxi)
            {
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
        }
        return ans;
    }
};
