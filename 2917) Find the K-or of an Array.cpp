class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        int ans = 0;
        for(int i = 0; i < 32; i++)
        {
            int check = 0;
            for(int j : nums)
            {
                if(j & (1 << i))
                {
                    check++;
                }
            }
            if(check >= k)
            {
                ans += 1 << i;
            }
        }
        return ans;
    }
};
