class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int check;
        for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                if(abs(nums[i] - nums[j]) <= min(nums[i], nums[j]))
                {
                    check = nums[i]^nums[j];
                    ans = max(ans, check);
                }
            }
        }
        return ans;
    }
};
