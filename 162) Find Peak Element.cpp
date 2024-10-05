class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int max = nums[0];
        int ans;
        int n = nums.size();
        if(n == 1)
        {
            return 0;
        }
        for(int i = 0; i < n; i++)
        {
            if(nums[i] > max)
            {
                max = nums[i];
                ans = i;
            }
        }
        /*if(max < 0)
        {
            return 0;
        }*/
        return ans;
    }
};
