class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        int n = nums.size();
        if(n % k != 0)
        {
            return false;
        }
        map<int, int> mp;
        for(auto &it : nums)
        {
            mp[it]++;
        }
        while(mp.size() > 0)
        {
            int start = mp.begin()->first;
            for(int i = start; i < start + k; i++)
            {
                if(mp[i] == 0)
                {
                    return false;
                }
                mp[i]--;
                if(mp[i] == 0)
                {
                    mp.erase(i);
                }
            }
        }
        return true;
    }
};
