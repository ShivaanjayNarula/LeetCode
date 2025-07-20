class Solution {
public:
    int minCapability(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = -1;
        int left = *min_element(nums.begin(), nums.end());
        int right = *max_element(nums.begin(), nums.end());
        while(left <= right)
        {
            int mid = left + (right - left)/2;
            if(helper(nums, mid, k))
            {
                ans = mid;
                right = mid-1;
            }
            else
            {
                left = mid+1;
            }
        }
        return ans;
    }
    bool helper(vector<int> &nums, int mid, int k)
    {
        int n = nums.size();
        int i = 0;
        while(i < n)
        {
            if(nums[i] <= mid)
            {
                i+=2;
                k--;
            }
            else
            {
                i++;
            }
        }
        if(k <= 0)
        {
            return true;
        }
        return false;
    }
};
