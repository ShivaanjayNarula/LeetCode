class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            mp[nums[i]]++;
        }
        int check = 0;
        for(auto i : mp)
        {
            if(i.second > check)
            {
                check = i.second;
            }
        }
        int ans = 0;
        for(auto i : mp)
        {
            if(i.second == check)
            {
                ans += check;
            }
        }
        return ans;
    }
};
