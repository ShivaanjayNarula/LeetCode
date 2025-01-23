class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        if(n == 0)
        {
            return ans;
        }
        unordered_map<int, int> m;
        for(auto i : nums)
        {
            m[i]++;
        }
        for(auto i : m)
        {
            if(i.second == 2)
            {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};
