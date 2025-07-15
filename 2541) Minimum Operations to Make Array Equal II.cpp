class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
        int n = nums1.size();
        if(k == 0)
        {
            if(nums1 == nums2)
            {
                return 0;
            }
            return -1;
        }
        long long check1 = 0;
        long long check2 = 0;
        for(int i = 0; i < n; i++)
        {
            if(nums1[i] >= nums2[i])
            {
                if((nums1[i] - nums2[i]) % k == 0)
                {
                    check1 += nums1[i] - nums2[i];
                }
                else
                {
                    return -1;
                }
            }
            else
            {
                if((nums2[i] - nums1[i]) % k == 0)
                {
                    check2 += nums2[i] - nums1[i];
                }
                else
                {
                    return -1;
                }
            }
        }
        long long ans = -1;
        if(check1 - check2 == 0)
        {
            ans = check1 / k;
        }
        return ans;
    }
};
