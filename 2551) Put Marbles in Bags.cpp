class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        int n = weights.size();
        if(k == 1)
        {
            return 0;
        }
        
        vector<int> nums;
        for(int i = 0; i < n-1; i++)
        {
            nums.push_back(weights[i] + weights[i+1]);
        }
        sort(nums.begin(), nums.end());
        long long mini = accumulate(nums.begin(), nums.begin() + k - 1, 0LL);
        long long maxi = accumulate(nums.end() - k + 1, nums.end(), 0LL);
        long long ans = maxi - mini;
        return ans;
    }
};
