class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = i; j < n; j++)
            {
                if(nums[i]-nums[j] == k || nums[j]-nums[i] == k)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};
