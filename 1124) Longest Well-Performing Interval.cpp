class Solution {
public:
    int longestWPI(vector<int>& hours) {
        int n = hours.size();
        int check = 0;
        int ans = 0;
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            if(hours[i] > 8)
            {
                check++;
            }
            else
            {
                check--;
            }
            if(check > 0)
            {
                ans = i+1;
            }
            else
            {
                if(mp.find(check) == mp.end())
                {
                    mp[check] = i;
                }
                if(mp.find(check-1) != mp.end())
                {
                    ans = max(ans, i - mp[check-1]);
                }
            }
        }
        return ans;
    }
};
