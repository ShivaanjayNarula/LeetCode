class Solution {
public:
    int longestString(int x, int y, int z) {
        int ans;
        if(x == y)
        {
            ans = 2*(x + y + z);
        }
        else
        {
            ans = 2 * min(x, y) + 1;
            ans = 2 * (ans + z);
        }
        return ans;
    }
};
