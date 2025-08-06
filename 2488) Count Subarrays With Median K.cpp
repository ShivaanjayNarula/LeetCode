class Solution {
public:
    int countSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        mp[0] = 1;
        int count = 0;
        bool check = false;
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] < k)
            {
                count--;
            }
            else if(nums[i] > k)
            {
                count++;
            }
            else
            {
                check = true;
            }
            if(check == true)
            {
                ans += mp[count] + mp[count-1];
            }
            else
            {
                mp[count]++;
            }
        }
        return ans;
    }
};
