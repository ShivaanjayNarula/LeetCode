class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i = 0;
        int j = n-1;
        for(int k = 0; k < n; k++)
        {
            if(-nums[i] == nums[j])
            {
                return nums[j];
            }
            else if(-nums[i] > nums[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return -1;
    }
};
