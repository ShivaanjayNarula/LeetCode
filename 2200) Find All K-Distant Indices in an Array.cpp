class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> ans;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            int check = -1;
            for(int j = 0; j < n; j++)
            {
                if(abs(i-j) <= k && nums[j] == key)
                {
                    check = i;
                }
            }
            if(check != -1)
            {
                ans.push_back(check);
            }
        }
        return ans;
    }
};
