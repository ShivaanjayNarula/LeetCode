class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int left = 0;
        int right = nums[n-1];
        while(left < right)
        {
            int mid = (left + right) / 2;
            if(count(nums, mid) < k)
            {
                left = mid + 1;
            }
            else
            {
                right = mid;
            }
        }
        return left;
    }
    int count(vector<int> &nums, int mid)
    {
        int check = 0;
        int n = nums.size();
        int slow = 0;
        int fast = 1;
        for(; fast < n; fast++)
        {
            while(fast > slow && nums[fast] - nums[slow] > mid)
            {
                slow++;
            }
            check += fast - slow;
        }
        return check;
    }
};
