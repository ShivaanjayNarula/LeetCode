class Solution {
public:
    int hammingDistance(int x, int y) {
        vector<int> nums1;
        vector<int> nums2;
        int a = max(x, y);
        while(a)
        {
            int i = x % 2;
            int j = y % 2;
            nums1.push_back(i);
            nums2.push_back(j);
            x /= 2;
            y /= 2;
            a /= 2;
        }
        int ans = 0;
        for(int i = 0; i < nums1.size(); i++)
        {
            if(nums1[i] != nums2[i])
            {
                ans++;
            }
        }
        return ans;
    }
};
