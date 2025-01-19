class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int check = 0;
        for(int i = 0; i < n; i++)
        {
            check += nums[i];
            if(check == 0)
            {
                ans++;
            }
        }
        return ans;
    }
};
