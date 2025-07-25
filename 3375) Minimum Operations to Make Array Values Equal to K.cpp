class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int mini = nums[0];
        unordered_set<int> st;
        for(int i = 0; i < n; i++)
        {
            mini = min(mini, nums[i]);
            st.insert(nums[i]);
        }
        if(mini < k)
        {
            return -1;
        }
        if(mini == k)
        {
            return st.size()-1;
        }
        return st.size();
    }
};
