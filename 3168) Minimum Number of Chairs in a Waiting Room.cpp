class Solution {
public:
    int minimumChairs(string s) {
        int n = s.size();
        int ans = 0;
        int count = 0;
        for(char ch : s)
        {
            if(ch == 'E')
            {
                count++;
            }
            else
            {
                count--;
            }
            ans = max(ans, count);
        }
        return ans;
    }
};
