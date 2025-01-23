class Solution {
public:
    int binaryGap(int n) {
        int ans = 0;
        int curr = 1;
        int prev = -1;
        string s;
        while(n > 0)
        {
            int check;
            check = n%2;
            if(check == 1)
            {
                if(prev >= 0)
                {
                    ans = max(ans, curr - prev);
                }
                prev = curr;
            }
            curr++;
            n /= 2;
        }
        return ans;
    }
};
