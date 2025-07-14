class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int right = 0;
        int zero = 0;
        int ans = 0;
        while(right < n)
        {
            if(nums[right] == 0)
            {
                zero++;
            }
            while(zero > k)
            {
                if(nums[left] == 0)
                {
                    zero--;
                }
                left++;
            }
            ans = max(ans, right-left+1);
            right++;
        }
        return ans;
    }
};
