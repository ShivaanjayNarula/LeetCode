class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int ans = 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++)
        {
            int n1 = nums[i].size();
            if(target.substr(0, n1) == nums[i])
            {
                string check = target.substr(n1);
                auto left = lower_bound(nums.begin(), nums.end(), check);
                auto right = upper_bound(nums.begin(), nums.end(), check);
                ans += right - left;
                if(check == nums[i])
                {
                    ans--;
                }
            }
        }
        return ans;
    }
};
