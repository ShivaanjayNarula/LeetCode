class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int left = 1;
        int right = n;
        while(left <= right)
        {
            int mid = left + (right-left)/2;
            auto i = lower_bound(nums.begin(), nums.end(), mid);
            int check = distance(i, nums.end());
            if(check == mid)
            {
                return mid;
            }
            else if(check > mid)
            {
                left = mid+1;
            }
            else if(check < mid)
            {
                right = mid-1;
            }
        }
        return -1;
    }
};
