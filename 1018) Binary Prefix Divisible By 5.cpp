class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int n = nums.size();
        vector<bool> ans;
        int check = 0;
        for(int i = 0; i < n; i++)
        {
            check = (check * 2 + nums[i])%5;
            ans.push_back(check == 0);
        }
        return ans;
    }
};
