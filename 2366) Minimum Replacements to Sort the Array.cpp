class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;
        int check = nums[n-1];
        for(int i = n-2; i >= 0; i--)
        {
            if(nums[i] > check)
            {
                int count = nums[i]/check;
                if(nums[i] % check != 0)
                {
                    count++;
                }
                ans += count - 1;
                check = nums[i]/count;
            }
            else
            {
                check = nums[i];
            }
        }
        return ans;
    }
};
