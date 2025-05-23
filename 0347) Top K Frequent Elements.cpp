class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int, int> mp;
        for(auto i : nums)
        {
            mp[i]++;
        }
        while(k > 0)
        {
            int check = 0;
            int index = 0;
            for(auto it : mp)
            {
                if(it.second > check)
                {
                    check = it.second;
                    index = it.first;
                }
            }
            mp.erase(index);
            ans.push_back(index);
            k--;
        }
        return ans;
    }
};
