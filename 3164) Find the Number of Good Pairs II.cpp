class Solution {
public:
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int n = nums1.size();
        int m = nums2.size();
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            for(int j = 1; j*j <= nums1[i]; j++)
            {
                if(j*j == nums1[i])
                {
                    mp[j]++;
                }
                else if(nums1[i] % j == 0)
                {
                    mp[j]++;
                    mp[nums1[i]/j]++;
                }
            }
        }
        long long ans = 0;
        for(int i = 0; i < m; i++)
        {
            nums2[i] *= k;
            if(mp[nums2[i]] > 0)
            {
                ans += mp[nums2[i]];
            }
        }
        return ans;
    }
};
