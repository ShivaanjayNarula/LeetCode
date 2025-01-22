class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        int n = nums.size();
        int ans = n;
        int left = 0;
        int right = n/2;
        for(; left < n/2 && right < n; right++)
        {
            if(nums[left] < nums[right])
            {
                ans -= 2;
                left++;
            }
        }
        return ans;
    }
};
