class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> bob;
        vector<int> alice;
        for(int i = 0; i <  n; i++)
        {
            if(i % 2 == 0)
            {
                alice.push_back(nums[i]);
            }
            else
            {
                bob.push_back(nums[i]);
            }
        }
        vector<int> ans;
        for(int i = 0; i < n/2; i++)
        {
            ans.push_back(bob[i]);
            ans.push_back(alice[i]);
        }
        return ans;
    }
};
