class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int n = nums.size();
        int check = 0;
        int ans = 0;
        int j = 0;
        for(int i = 0; i < n; i++)
        {
            while((check & nums[i]) != 0)
            {
                check ^= nums[j++];
            }
            check |= nums[i];
            ans = max(ans, i-j+1);
        }
        return ans;
    }
};
