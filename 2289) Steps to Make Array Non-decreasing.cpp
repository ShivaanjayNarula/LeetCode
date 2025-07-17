class Solution {
public:
    int totalSteps(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        stack<pair<int, int>> st;
        for(int i = n-1; i >= 0; i--)
        {
            int count = 0;
            while(!st.empty() && nums[i] > st.top().first)
            {
                count = max(count+1, st.top().second);
                st.pop();
            }
            ans = max(ans, count);
            st.push({nums[i], count});
        }
        return ans;
    }
};
