class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        reverse(nums.begin(), nums.end());
        int n = nums.size();
        vector<int> ans;
        for(int i = 0; i < n; i++)
        {
            while(nums[i] > 0)
            {
                int temp = nums[i] % 10;
                ans.push_back(temp);
                nums[i] /= 10;
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
