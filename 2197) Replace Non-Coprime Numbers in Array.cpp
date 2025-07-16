class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i = 0; i < n; i++)
        {
            while(!ans.empty() && gcd(ans.back(), nums[i]) > 1)
            {
                nums[i] = lcm(nums[i], ans.back());
                ans.pop_back();
            }
            ans.push_back(nums[i]);
        }
        return ans;
    }
};
