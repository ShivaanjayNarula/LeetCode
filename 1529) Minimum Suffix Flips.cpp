class Solution {
public:
    int minFlips(string target) {
        int n = target.size();
        int ans = 0;
        for(char ch : target)
        {
            if(ans % 2 != 0)
            {
                ch ^= 1;
            }
            if(ch == '1')
            {
                ans++;
            }
        }
        return ans;
    }
};
