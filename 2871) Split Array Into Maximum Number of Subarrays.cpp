class Solution {
public:
    int maxSubarrays(vector<int>& nums) {
        int n = nums.size();
        int check = -1;
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            check = (check & nums[i]);
            if(check == 0)
            {
                ans++;
                check = -1;
            }
        }
        if(ans == 0)
        {
            return 1;
        }
        return ans;
    }
};
