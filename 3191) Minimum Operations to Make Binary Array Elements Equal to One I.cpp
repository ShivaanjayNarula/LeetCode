class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == 0)
            {
                if(i+3 > n)
                {
                    return -1;
                }
                nums[i+1] = 1 - nums[i+1];
                nums[i+2] = 1 - nums[i+2];
                ans++;
            }
        }
        return ans;
    }
};
