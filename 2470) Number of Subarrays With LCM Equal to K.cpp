class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        int ans = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            int val = nums[i];
            if(val == k)
            {
                ans++;
            }
            for(int j = i+1; j < n && k % nums[i] == 0; j++)
            {
                val = lcm(val, nums[j]);
                if(val == k)
                {
                    ans++;
                }
                else if(val > k)
                {
                    break;
                }
            }
        }
        return ans;
    }
};
