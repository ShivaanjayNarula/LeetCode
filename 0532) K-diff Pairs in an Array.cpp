class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<pair<int, int>> ans;
        int i = 0;
        int j = 1;
        while(j < n)
        {
            int check = nums[j] - nums[i];
            if(check == k)
            {
                ans.insert({nums[i], nums[j]});
                i++;
                j++;
            }
            else if(check > k)
            {
                i++;
            }
            else if(check < k)
            {
                j++;
            }
            if(i == j)
            {
                j++;
            }
        }
        return ans.size();
    }
};
