class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, bool> mp;
        int maxi = *max_element(nums.begin(), nums.end());
        for(auto i : nums)
        {
            mp[i] = true;
        }
        for(int i = 1; i < maxi; i++)
        {
            if(mp.find(i) == mp.end())
            {
                return i;
            }
        }
        if(maxi < 1)
        {
            return 1;
        }
        return maxi+1;
    }
};
