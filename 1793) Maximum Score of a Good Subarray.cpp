class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int n = nums.size();
        int left = k;
        int right = k;
        int ans = nums[k];
        int mini = nums[k];
        while(left > 0 || right < n-1)
        {
            if(left == 0)
            {
                right++;
            }
            else if(right == n-1)
            {
                left--;
            }
            else if(nums[left-1] > nums[right+1])
            {
                left--;
            }
            else
            {
                right++;
            }
            mini = min({mini, nums[left], nums[right]});
            ans = max(ans, mini * (right - left + 1));
        }
        return ans;
    }
};
