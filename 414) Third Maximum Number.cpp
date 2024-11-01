class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<int> ans;
        ans.push_back(nums[0]);
        for(int i = 1; i < n; i++)
        {
            if(nums[i] != nums[i-1])
            {
                ans.push_back(nums[i]);
            }
        }
        int a = ans.size();
        if(a < 3)
        {
            return ans[a-1];
        }
        return ans[a-3];
    }
};
