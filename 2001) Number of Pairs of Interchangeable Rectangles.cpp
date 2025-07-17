class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        int n = rectangles.size();
        long long ans = 0;
        unordered_map<double, long long> mp;
        for(int i = 0; i < n; i++)
        {
            double check = (double)rectangles[i][0]/(double)rectangles[i][1];
            if(mp.find(check) != mp.end())
            {
                ans += mp[check];
            }
            mp[check]++;
        }
        return ans;
    }
};
