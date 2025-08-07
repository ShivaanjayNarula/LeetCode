class Solution {
public:
    int numRabbits(vector<int>& answers) {
        int n = answers.size();
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            mp[answers[i]]++;
        }
        int ans = 0;
        for(auto it : mp)
        {
            int key = it.first;
            int value = it.second;
            while(value > 0)
            {
                ans += key + 1;
                value -= key+1;
            }
        }
        return ans;
    }
};
