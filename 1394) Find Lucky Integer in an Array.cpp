class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n = arr.size();
        int ans = -1;
        unordered_map<int, int> m;
        for(int i = 0; i < n; i++)
        {
            m[arr[i]]++;
        }
        for(auto i: m)
        {
            if(i.first == i.second)
            {
                ans = max(ans, i.first);
            }
        }
        return ans;
    }
};
