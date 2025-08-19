class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long n = nums.size();
        long long ans = 0;
        int check1 = -1;
        int check2 = -1;
        int check3 = -1;
        for(long long i = 0; i < n; i++)
        {
            if(nums[i] == minK)
            {
                check1 = i;
            }
            if(nums[i] == maxK)
            {
                check2 = i;
            }
            if(nums[i] < minK || nums[i] > maxK)
            {
                check3 = i;
            }
            if(check1 != -1 && check2 != -1)
            {
                if(min(check1, check2) - check3 >= 0)
                {
                    ans += min(check1, check2) - check3;
                }
            }
        }
        return ans;
    }
};
