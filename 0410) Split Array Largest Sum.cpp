class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int right = 0;
        for(int i = 0; i < n; i++)
        {
            left = max(left, nums[i]);
            right += nums[i];
        }
        int mid = 0;
        int ans = right;
        while(left <= right)
        {
            mid = left + (right - left)/2;
            int count = 1;
            int temp = 0;
            for(int i = 0; i < n; i++)
            {
                temp += nums[i];
                if(temp > mid)
                {
                    count++;
                    temp = nums[i];
                }
            }
            if(count <= k)
            {
                ans = mid;
                right = mid-1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return ans;
    }
};
