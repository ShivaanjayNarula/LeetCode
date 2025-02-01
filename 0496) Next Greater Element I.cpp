class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int, int> mp;
        int m = nums1.size();
        int n = nums2.size();
        for(int i = 0; i < n; i++)
        {
            while(!st.empty() && st.top() < nums2[i])
            {
                mp[st.top()] = nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }
        vector<int> ans;
        for(int i = 0; i < m; i++)
        {
            if(mp.count(nums1[i]))
            {
                ans.push_back(mp[nums1[i]]);
            }
            else
            {
                ans.push_back(-1);
            }
        }
        return ans;
    }
};
