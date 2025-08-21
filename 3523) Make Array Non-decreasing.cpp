class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int check = 0;
        for(int i = 0; i < n; i++)
        {
            check = max(check, nums[i]);
            if(check == nums[i])
            {
                ans++;
            }
        }
        return ans;
    }
};
