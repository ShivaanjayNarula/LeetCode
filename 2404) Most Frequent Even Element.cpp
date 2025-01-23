class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int> mp;
        for(auto i : nums)
        {
            mp[i]++;
        }
        int ans = -1;
        int max_count = -1;
        for(auto i : mp)
        {
            if(i.first % 2 == 0 && i.second > max_count)
            {
                ans = i.first;
                max_count = i.second;
            }
        }
        return ans;
    }
};
