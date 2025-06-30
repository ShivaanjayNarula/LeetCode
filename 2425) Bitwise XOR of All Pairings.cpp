class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int x = 0;
        int y = 0;
        for(int i = 0; i < m; i++)
        {
            x ^= nums1[i];
        }
        for(int i = 0; i < n; i++)
        {
            y ^= nums2[i];
        }
        int ans;
        ans = (m % 2 * y) ^ (n % 2 * x);
        return ans;
    }
};
