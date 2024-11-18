class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == k)
            {
                ans++;
            }
            bool check = false;
            int a = nums[i];
            for(int j = i+1; j < n; j++)
            {
                if(nums[j] % k != 0)
                {
                    break;
                }
                a = gcd(a, nums[j]);
                if(a == k)
                {
                    check = true;
                }
                if(check)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};
