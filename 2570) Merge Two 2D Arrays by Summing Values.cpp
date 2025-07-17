class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int i = 0;
        int j = 0;
        vector<vector<int>> ans;
        while(i < m || j < n)
        {
            if(i < m && j < n && nums1[i][0] == nums2[j][0])
            {
                ans.push_back({nums1[i][0], (nums1[i][1] + nums2[j][1])});
                i++;
                j++;
            }
            else if(j == n || (i < m && nums1[i][0] < nums2[j][0]))
            {
                ans.push_back(nums1[i]);
                i++;
            }
            else
            {
                ans.push_back(nums2[j]);
                j++;
            }
        }
        return ans;
    }
};
