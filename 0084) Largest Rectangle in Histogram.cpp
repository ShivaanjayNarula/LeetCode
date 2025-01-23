class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> prev;
        vector<int> next;
        vector<int> ans;
        previous(prev, heights.data(), n);
        nexts(next, heights.data(), n);
        reverse(next.begin(), next.end());
        for(int i = 0; i < n; i++)
        {
            ans.push_back(heights[i] * (next[i] - prev[i] - 1));
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
            while(!st.empty() and arr[st.top()]>=arr[i])
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
