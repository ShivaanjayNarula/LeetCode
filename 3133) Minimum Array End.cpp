class Solution {
public:
    long long minEnd(int n, int x) {
        long long ans = x;
        while(n > 1)
        {
            ans = (ans+1)|x;
            n--;
        }
        // ans+=1;
        return ans;
    }
};
