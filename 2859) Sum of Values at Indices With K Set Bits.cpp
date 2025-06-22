class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            int count = 0;
            int copy = i;
            while(copy)
            {
                count += copy & 1;
                copy >>= 1;
            }
            if(count == k)
            {
                ans += nums[i];
            }
        }
        return ans;
    }
};
