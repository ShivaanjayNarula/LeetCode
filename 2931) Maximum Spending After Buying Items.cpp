class Solution {
public:
    long long maxSpending(vector<vector<int>>& values) {
        vector<int> a;
        for(vector<int>& i : values)
        {
            a.insert(a.end(), i.begin(), i.end());
        }
        sort(a.begin(), a.end());
        long long b = 0;
        for(long long i = 0; i < a.size(); i++)
        {
            b += (i+1) * a[i];
        }
        return b;
    }
};
