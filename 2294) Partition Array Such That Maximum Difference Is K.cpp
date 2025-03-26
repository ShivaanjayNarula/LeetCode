class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        int n = nums.size();
        int ans = 1;
        sort(nums.begin(), nums.end());
        int mini = nums[0];
        for(int i = 0; i < n; i++)
        {
            if(nums[i] - mini > k)
            {
                ans++;
                mini = nums[i];
            }
        }
        return ans;
    }
};
