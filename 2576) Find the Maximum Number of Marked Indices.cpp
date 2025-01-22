class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int left = 0;
        int right = n/2;
        int ans = 0;
        while(left < n/2 && right < n)
        {
            if(nums[left] * 2 <= nums[right])
            {
                ans+=2;
                left++;
                right++;
            }
            else
            {
                right++;
            }
        }
        return ans;
    }
};
