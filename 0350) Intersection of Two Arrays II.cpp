class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        unordered_map<int, int> mp;
        vector<int> ans;
        for(auto i : nums1)
        {
            mp[i]++;
        }
        for(int i = 0; i < n2; i++)
        {
            if(mp[nums2[i]] > 0)
            {
                ans.push_back(nums2[i]);
                mp[nums2[i]]--;
            }
            continue;
        }
        return ans;
    }
};
