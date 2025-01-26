class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int left = 0;
        int right = 0;
        int n = nums.size();
        for(int i = 0; i < k; i++)
        {
            left += nums[i];
        }
        int ans = left;
        for(int i = 0; i < k; i++)
        {
            left -= nums[k-i-1];
            right += nums[n-i-1];
            ans = max(ans, left+right);
        }
        return ans;
    }
};
