class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int ans = 0;
        while(target > 1 && --maxDoubles >= 0)
        {
            int add = target % 2;
            ans += add + 1;
            target /= 2;
        }
        return ans + target - 1;
    }
};
