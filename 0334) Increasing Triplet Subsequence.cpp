class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n = nums.size();
        if(n < 3)
        {
            return false;
        }
        int left = INT_MAX;
        int mid = INT_MAX;
        for(int i = 0; i < n ; i ++)
        {
            if(nums[i] > mid)
            {
                return true;
            }
            else if(nums[i] > left && nums[i] < mid)
            {
                mid = nums[i];
            }
            else if(nums[i] < left)
            {
                left = nums[i];
            }
        }
        return false;
    }
};
