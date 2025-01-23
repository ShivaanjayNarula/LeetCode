class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            int check = nums[i];
            if(check < k)
            {
                ans++;
            }
            for(int j = i+1; j < n; j++)
            {
                check *= nums[j];
                if(check < k)
                {
                    ans++;
                }
                else
                {
                    break;
                }
            }
        }
        return ans;
    }
};
