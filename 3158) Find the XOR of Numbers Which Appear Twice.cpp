class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            mp[nums[i]]++;
        }
        for(auto i : mp)
        {
            if(i.second == 2)
            {
                ans ^= i.first;
            }
        }
        return ans;
    }
};
