class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0;
        string s1, s2;
        for(int i = 0; i < n; i++)
        {
            l ^= nums[i];
        }
        while(k > 0)
        {
            if(k % 2 == 0)
            {
                s1 += "0";
            }
            else
            {
                s1 += "1";
            }
            k /= 2;
        }
        while(l > 0)
        {
            if(l % 2 == 0)
            {
                s2 += "0";
            }
            else
            {
                s2 += "1";
            }
            l /= 2;
        }
        if(s1.size() < s2.size())
        {
            while(s1.size() < s2.size())
            {
                s1 += "0";
            }
        }
        else
        {
            while(s2.size() < s1.size())
            {
                s2 += "0";
            }
        }
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        int ans = 0;
        for(int i = 0; i < s1.size(); i++)
        {
            if(s1[i] != s2[i])
            {
                ans++;
            }
        }
        return ans;
    }
};
