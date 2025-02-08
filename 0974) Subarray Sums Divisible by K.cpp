class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        int sum = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;
        for(int i = 0; i < n; i++)
        {
            sum += nums[i];
            int check = sum % k;
            if(check < 0)
            {
                check += k;
            }
            if(mp.find(check) != mp.end())
            {
                ans += mp[check];
            }
            mp[check]++;
        }
        return ans;
    }
};
