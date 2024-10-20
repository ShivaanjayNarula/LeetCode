class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int prod;
        for(int i = 0; i < n; i++)
        {
            nums[i]--;
        }
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < i; j++)
            {
                prod = nums[j] * nums[i];
                ans = max(ans, prod);
            }
        }
        return ans;
    }
};
