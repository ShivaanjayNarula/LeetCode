class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            string temp = to_string(nums[i]);
            int m = temp.size();
            int maxi = INT_MIN;
            for(auto j : temp)
            {
                maxi = max(maxi, j - '0');
            }
            int one = 0;
            for(int j = 0; j < m; j++)
            {
                one = one * 10 + 1;
            }
            nums[i] = maxi * one;
        }
        int ans = accumulate(nums.begin(), nums.end(), 0);
        return ans;
    }
};
