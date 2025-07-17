class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int ans = 0;
        vector<int> height(n, 0);
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(mat[i][j] == 1)
                {
                    height[j]+=1;
                }
                else
                {
                    height[j] = 0;
                }
            }
            ans += helper(height);
        }
        return ans;
    }
    int helper(vector<int> &height)
    {
        int n = height.size();
        int ans = 0;
        vector<int> sum(n, 0);
        stack<int> st;
        for(int i = 0; i < n; i++)
        {
            while(!st.empty() && height[st.top()] >= height[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                sum[i] = height[i] * (i + 1);
            }
            else
            {
                sum[i] = height[i] * (i - st.top()) + sum[st.top()];
            }
            st.push(i);
            ans += sum[i];
        }
        return ans;
    }
};
