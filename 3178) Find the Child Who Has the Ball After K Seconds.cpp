class Solution {
public:
    int numberOfChild(int n, int k) {
        int ans = 0;
        int dir = 1;
        for(int i = 0; i < k; i++)
        {
            ans += dir;
            if(ans == 0 || ans == n-1)
            {
                dir = -dir;
            }
        }
        return ans;
    }
};
