class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int ans = 0;
        unordered_map<int, int> mp;
        mp[0] = -1;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == 1)
            {
                count++;
            }
            else
            {
                count--;
            }
            if(mp.find(count) != mp.end())
            {
                ans = max(ans, i - mp[count]);
            }
            else
            {
                mp[count] = i;
            }
        }
        return ans;
    }
};
