class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int> nums1 = nums;
        int n = nums.size();
        sort(nums1.begin(), nums1.end());
        int check1 = INT_MIN;
        int check2 = INT_MIN;
        int index1 = -1;
        int index2 = -1;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] > check1)
            {
                check2 = check1;
                check1 = nums[i];
                index1 = i;
            }
            else if(nums[i] > check2)
            {
                check2 = nums[i];
            }
        }
        if(check1 >= 2 * check2)
        {
            return index1;
        }
        return -1;
    }
};
