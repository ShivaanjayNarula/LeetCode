class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        if(matrix.empty())
        {
            return 0;
        }
        int ans = INT_MIN;
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i = 0; i < m; i++)
        {
            vector<int> colSum(n, 0);
            for(int j = i; j < m; j++)
            {
                for(int k = 0; k < n; k++)
                {
                    colSum[k] += matrix[j][k];
                }
                ans = max(ans, maxSubArraySumNoLargerThanK(colSum, k));
            }
        }
        return ans;
    }
    int maxSubArraySumNoLargerThanK(vector<int>& nums, int k) {
        int check = INT_MIN;
        set<int> prefixSums;
        prefixSums.insert(0);
        int add = 0;
        for(int num : nums)
        {
            add += num;
            auto it = prefixSums.lower_bound(add - k);
            if(it != prefixSums.end())
            {
                check = max(check, add - *it);
            }
            prefixSums.insert(add);
        }
        return check;
    }
};
