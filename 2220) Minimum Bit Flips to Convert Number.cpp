class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = 0;
        int check = start ^ goal;
        while(check > 0)
        {
            ans += check & 1;
            check >>= 1;
        }
        return ans;
    }
};
