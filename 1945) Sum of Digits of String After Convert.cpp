class Solution {
public:
    int getLucky(string s, int k) {
        int n = s.size();
        vector<int> nums;
        int ans = 0;
        for(char ch : s)
        {
            int check = ch - 'a' + 1;
            while(check > 0)
            {
                ans += check % 10;
                check /= 10;
            }
        }
        for(int i = 1; i < k; i++)
        {
            ans = solve(ans);
        }
        return ans;
    }
    int solve(int i)
    {
        int ans = 0;
        while(i)
        {
            ans += i % 10;
            i /= 10;
        }
        return ans;
    }
};
