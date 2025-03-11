class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        vector<int> nums1 = nums;
        sort(nums1.begin(), nums1.end());
        int left = 0;
        int right = n-1;
        while(left < n && nums[left] == nums1[left])
        {
            left++;
        }
        while(right >= 0 && nums[right] == nums1[right])
        {
            right--;
        }
        if(right > left)
        {
            return right - left + 1;
        }
        return 0;
    }
};
