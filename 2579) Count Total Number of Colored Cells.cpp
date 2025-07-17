class Solution {
public:
    long long coloredCells(int n) {
        long long ans = 2LL * n * (n-1) + 1;
        return ans;
    }
};
