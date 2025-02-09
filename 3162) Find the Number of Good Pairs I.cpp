class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int ans = 0;
        int m = nums1.size();
        int n = nums2.size();
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                int calc = nums2[j] * k;
                if(nums1[i] % calc == 0)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};
