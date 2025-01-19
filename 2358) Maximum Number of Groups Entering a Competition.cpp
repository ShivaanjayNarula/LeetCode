class Solution {
public:
    int maximumGroups(vector<int>& grades)
    {
        int n = grades.size();
        int x = 0;
        int add = 0;
        while(add + x + 1 <= n)
        {
            add += ++x;
        }
        return x;
    }
};
