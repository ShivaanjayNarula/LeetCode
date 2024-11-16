class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = INT_MIN;
        int n = height.size();
        int left = 0;
        int right = n - 1;
        while(left < right)
        {
            int area = (min(height[left], height[right]) * (right - left));
            ans = max(area, ans);
            if(height[left] < height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return ans;
    }
};
