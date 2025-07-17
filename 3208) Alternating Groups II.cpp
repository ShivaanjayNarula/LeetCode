class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int n = colors.size();
        colors.insert(colors.end(), colors.begin(), colors.end());
        int count = 0;
        int ans = 0;
        int left = 0;
        int right = 0;
        while(right < n+k-1)
        {
            if(right > 0 && colors[right] == colors[right-1])
            {
                left = right;
            }
            if(right - left + 1 >= k)
            {
                ans++;
            }
            right++;
        }
        return ans;
    }
};
