/*
 * // This is the custom function interface.
 * // You should not implement it, or speculate about its implementation
 * class CustomFunction {
 * public:
 *     // Returns f(x, y) for any given positive integers x and y.
 *     // Note that f(x, y) is increasing with respect to both x and y.
 *     // i.e. f(x, y) < f(x + 1, y), f(x, y) < f(x, y + 1)
 *     int f(int x, int y);
 * };
 */

class Solution {
public:
    vector<vector<int>> findSolution(CustomFunction& customfunction, int z) {
        vector<vector<int>> ans;
        int i = 1;
        int j = 1000;
        while(i <= 1000)
        {
            while(j > 1 && customfunction.f(i, j) > z)
            {
                j--;
            }
            if(customfunction.f(i, j) == z)
            {
                ans.push_back({i, j});
            }
            i++;
        }
        return ans;
    }
};
