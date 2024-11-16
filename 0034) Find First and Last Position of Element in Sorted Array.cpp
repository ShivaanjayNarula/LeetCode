class Solution {
private:
    int binarysearch(vector<int>& nums, int target, bool find)
    {
        int low = 0;
        int high = nums.size() - 1;
        int index = -1;
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            if(nums[mid] == target)
            {
                index = mid;
                if(find)
                {
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }
            else if(nums[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return index;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = binarysearch(nums, target, true);
        int right = binarysearch(nums, target, false);
        if(left <= right)
        {
            return{left, right};
        }
        return{-1, -1};
    }
};
