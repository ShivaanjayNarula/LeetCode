class Solution {
public:
    int punishmentNumber(int n) {
        int ans = 0;
        for(int i = 1; i <= n; i++)
        {
            int sq = i*i;
            string s = to_string(sq);
            if(helper(s, 0, i))
            {
                ans += sq;
            }
        }
        return ans;
    }
    bool helper(string &s, int id, int target)
    {
        int n = s.size();
        if(id == n && target == 0)
        {
            return true;
        }
        int num = 0;
        for(int i = id; i < n; i++)
        {
            num = (num * 10) + (s[i] - '0');
            if(helper(s, i+1, target - num))
            {
                return true;
            }
        }
        return false;
    }
};
