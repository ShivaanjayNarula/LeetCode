class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> v;
        for(int i = 0; i < m; i++)
        {
            v.push_back(nums1[i]);
        }
        for(int i  = 0; i < n; i++)
        {
            v.push_back(nums2[i]);
        }
        sort(v.begin(), v.end());
        int total = v.size();
        if(total % 2 == 1)
        {
            return static_cast<double>(v[total/2]);
        }
        else
        {
            int a = v[total/2 - 1];
            int b = v[total/2];
            return (static_cast<double>(a) + static_cast<double>(b)) / 2.0;
        }
    }
};
