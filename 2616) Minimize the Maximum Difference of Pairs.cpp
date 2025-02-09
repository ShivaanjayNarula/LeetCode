class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int left = 0;
        int right = nums[n-1] - nums[0];
        while(left < right)
        {
            int k = 0;
            int mid = (left + right) / 2;
            for(int i = 1; i < n && k < p; i++)
            {
                if(nums[i] - nums[i-1] <= mid)
                {
                    k++;
                    i++;
                }
            }
            if(k >= p)
            {
                right = mid;
            }
            else
            {
                left = mid + 1;
            }
        }
        return left;
    }
};
