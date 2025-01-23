class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n;
        int left_max = 0;
        int right_max = 0;
        int ans = 0;
        for(int i = 1; i < n; i++)
        {
            left_max = max(left_max, height[left]);
            right_max = max(right_max, height[right-1]);
            if(left_max < right_max)
            {
                ans += left_max - height[left];
                left++;
            }
            else
            {
                ans += right_max - height[right-1];
                right--;
            }
        }
        return ans;
    }
};
