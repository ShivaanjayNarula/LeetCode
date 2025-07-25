class Solution {
    public int largestRectangleArea(int[] heights) {
        int n = heights.length;
        Stack<Pair> st = new Stack<>();
        int id = 0;
        int ans = -1;
        for(int i = 0; i < n; i++)
        {
            id = i;
            while(!st.empty() && st.peek().y > heights[i])
            {
                Pair p = st.pop();
                ans = Math.max(ans, (i - p.x) * p.y);
                id = p.x;
            }
            st.push(new Pair(id, heights[i]));
        }
        while(!st.empty())
        {
            Pair p = st.pop();
            ans = Math.max(ans, (n-p.x) * p.y);
        }
        return ans;
    }
}

class Pair{
    int x;
    int y;
    Pair(int x, int y)
    {
        this.x = x;
        this.y = y;
    }
}
