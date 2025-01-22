class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int check = 1;
        for(int i = 0; i < n; i++)
        {
            check *= nums[i];
        }
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == 0)
            {
                int k = 1;
                for(int j = 0; j < n; j++)
                {
                    if(j == i)
                    {
                        continue;
                    }
                    k *= nums[j];
                }
                ans.push_back(k);
            }
            else
            {
                ans.push_back(check/nums[i]);
            }
        }
        return ans;
    }
};
