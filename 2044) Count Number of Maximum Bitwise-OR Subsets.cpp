class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int n = nums.size();
        int maxOR = 0;
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            maxOR |= nums[i];
        }
        int totalmass = 1 << n;
        for(int mask = 0; mask < totalmass; mask++)
        {
            int currentOR = 0;
            for(int i = 0; i < n; i++)
            {
                if(mask & (1 << i))
                {
                    currentOR |= nums[i];
                }
            }
            if(currentOR == maxOR)
            {
                ans++;
            }
        }
        return ans;
    }
};
