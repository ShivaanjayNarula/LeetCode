class Solution {
public:
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
        int n = reward1.size();
        vector<vector<int>> nums;
        for(int i = 0; i < n; i++)
        {
            nums.push_back({reward1[i] - reward2[i], reward1[i], reward2[i]});
        }
        sort(nums.begin(), nums.end(), greater<vector<int>>());
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(k > 0)
            {
                ans += nums[i][1];
                k--;
            }
            else
            {
                ans += nums[i][2];
            }
        }
        return ans;
    }
};
