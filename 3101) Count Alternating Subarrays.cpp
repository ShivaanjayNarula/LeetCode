class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        int n = nums.size();
        long long ans = 1;
        long long size = 1;
        for(int i = 1; i < n; i++)
        {
            if(nums[i-1] == nums[i])
            {
                size = 1;
            }
            else
            {
                size = size+1;
            }
            ans += size;
        }
        return ans;
    }
};
