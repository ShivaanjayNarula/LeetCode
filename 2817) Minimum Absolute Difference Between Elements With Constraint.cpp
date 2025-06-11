class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums, int x) {
        if(x == 0)
        {
            return 0;
        }
        int n = nums.size();
        int ans = INT_MAX;
        set<int> st;
        for(int i = x; i < n; i++)
        {
            st.insert(nums[i-x]);
            auto index = st.lower_bound(nums[i]);
            if(index != st.end())
            {
                ans = min(ans, abs(*index - nums[i]));
            }
            if(index != st.begin())
            {
                index--;
                ans = min(ans, abs(*index - nums[i]));
            }
        }
        return ans;
    }
};
