class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        unordered_map<int, int> mp;
        int maxi = -1;
        for(int i = 0; i < n; i++)
        {
            int num = digitsum(nums[i]);
            if(mp.find(num) != mp.end())
            {
                maxi = max(maxi, mp[num] + nums[i]);
                mp[num] = max(mp[num], nums[i]);
            }
            else
            {
                mp[num] = nums[i];
            }
        }
        return maxi;
    }
    int digitsum(int n)
    {
        int sum = 0;
        while(n)
        {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
};
