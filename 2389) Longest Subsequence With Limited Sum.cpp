class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        int m = queries.size();
        sort(nums.begin(), nums.end());
        vector<int> prefixSum(n, 0);
        prefixSum[0] = nums[0];
        for(int i = 1; i < n; i++)
        {
            prefixSum[i] = prefixSum[i-1] + nums[i];
        }
        vector<int> ans(m, 0);
        for(int i = 0; i < m; i++)
        {
            int left = 0;
            int right = n-1;
            int best = 0;
            while(left <= right)
            {
                int mid = left + (right - left)/2;
                if(prefixSum[mid] <= queries[i])
                {
                    best = mid+1;
                    left = mid+1;
                }
                else
                {
                    right = mid-1;
                }
            }
            ans[i] = best;
        }
        return ans;
    }
};
