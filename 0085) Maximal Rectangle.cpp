class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty())
        {
            return 0;
        }
        int ans = 0;
        int n = matrix[0].size();
        vector<int> height(n, 0);
        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(matrix[i][j] == '1')
                {
                    height[j]++;
                }
                else
                {
                    height[j] = 0;
                }
            }
            ans = max(ans, largestRectangleArea(height));
        }
        return ans;
    }
    int largestRectangleArea(vector<int>& height)
    {
        int n = height.size();
        vector<int> prev;
        vector<int> next;
        vector<int> ans;
        previous(prev, height.data(), n);
        nexts(next, height.data(), n);
        reverse(next.begin(), next.end());
        for(int i = 0; i < n; i++)
        {
            ans.push_back(height[i] * (next[i] - prev[i] - 1));
        }
        return *max_element(ans.begin(), ans.end());
    }
    void previous(vector<int> &prev, int *arr, int n)
    {
        stack<int> st;
        for(int i = 0; i < n; i++)
        {
            while(!st.empty() && arr[st.top()] >= arr[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                prev.push_back(-1);
            }
            else
            {
                prev.push_back(st.top());
            }
            st.push(i);
        }
    }
    void nexts(vector<int> &next, int *arr, int n)
    {
        stack<int> st;
        for(int i = n-1; i >= 0; i--)
        {
            while(!st.empty() && arr[st.top()] >= arr[i])
            {
                st.pop();
            }
            if(st.empty())
            {
                next.push_back(n);
            }
            else
            {
                next.push_back(st.top());
            }
            st.push(i);
        }
    }
};
