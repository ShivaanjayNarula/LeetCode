class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            int sum = 0;
            int count = 0;
            for(int j = 1; j*j <= nums[i]; j++)
            {
                if(nums[i] % j == 0)
                {
                    if(nums[i]/j == j)
                    {
                        sum += j;
                        count++;
                    }
                    else
                    {
                        sum += j + (nums[i]/j);
                        count += 2;
                    }
                }
            }
            if(count == 4)
            {
                ans += sum;
            }
        }
        return ans;
    }
};
