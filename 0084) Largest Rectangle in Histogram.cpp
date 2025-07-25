class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<pair<int, int>> st;
        int ans = -1;
        int id = 0;
        for(int i = 0; i < n; i++)
        {
            id = i;
            while(!st.empty() && st.top().second > heights[i])
            {
                ans = max(ans, (i - st.top().first) * st.top().second);
                id = st.top().first;
                st.pop();
            }
            st.push({id, heights[i]});
        }
        while(!st.empty())
        {
            ans = max(ans, (n - st.top().first) * st.top().second);
            st.pop();
        }
        return ans;
    }
};
