class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        if(n < 2)
        {
            return 0;
        }
        stack<int> st;
        for(int i = 0; i < n; i++)
        {
            if(st.empty() || nums[i] < nums[st.top()])
            {
                st.push(i);
            }
        }
        int ans = 0;
        for(int i = n-1; i >= 0; i--)
        {
            while(!st.empty() && nums[i] >= nums[st.top()])
            {
                ans = max(ans, i - st.top());
                st.pop();
            }
        }
        return ans;
    }
};
