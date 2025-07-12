class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        bool check = true;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] != check)
            {
                ans++;
                check = !check;
            }
        }
        return ans;
    }
};
