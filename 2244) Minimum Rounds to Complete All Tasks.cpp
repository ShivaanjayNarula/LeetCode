class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int n = tasks.size();
        int ans = 0;
        unordered_map<int, int> mp;
        for(auto it : tasks)
        {
            mp[it]++;
        }
        for(auto it : mp)
        {
            if(it.second == 1)
            {
                return -1;
            }
            ans += ceil(it.second/3.0);
        }
        return ans;
    }
};
