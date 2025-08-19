class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == 0)
            {
                count++;
                continue;
            }
            if(count != 0)
            {
                ans += (long long) count * (count+1) / 2;
                count = 0;
            }
        }
        if(count != 0)
        {
            ans += (long long) count * (count+1) / 2;
            count = 0;
        }
        return ans;
    }
};
