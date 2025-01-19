class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                if(nums[i] != nums[j])
                {
                    for(int k = j+1; k < n; k++)
                    {
                        if(nums[j] != nums[k])
                        {
                            ans++;
                        }
                    }
                }
            }
        }
        return ans;
    }
};
