class Solution {
public:
    int bulbSwitch(int n) {
        int ans = 0;
        for(int i = 1; i <= n; i++)
        {
            if(i*i <= n)
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        return ans;
    }
};
