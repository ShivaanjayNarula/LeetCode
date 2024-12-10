class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int ans = 0;
        int mid = 0;
        mid = n/2;
        for(int i = 0; i < n; i++)
        {
            ans += abs(nums[i] - nums[mid]);
        }
        return ans;
    }
};
