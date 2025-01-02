class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n = nums.size();
        int ans = 1;
        for(int i = 0; i < n-1; i++)
        {
            int count = 1;
            while(i+1 < n && nums[i] < nums[i+1])
            {
                count++;
                i++;
            }
            ans = max(ans, count);
        }
        return ans;
    }
};
