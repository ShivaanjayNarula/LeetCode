class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> ans;
        unordered_set<int> s(nums1.begin(), nums1.end());
        for(int i = 0; i < n; i++)
        {
            if(s.count(nums2[i]))
            {
                ans.push_back(nums2[i]);
                s.erase(nums2[i]);
            }
        }
        return ans;
    }
};
