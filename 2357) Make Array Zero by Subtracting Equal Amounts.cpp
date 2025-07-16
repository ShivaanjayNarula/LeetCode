class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int check = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++)
        {
            if(nums[i] > check)
            {
                ans++;
                check = nums[i];
            }
        }
        return ans;
    }
};
