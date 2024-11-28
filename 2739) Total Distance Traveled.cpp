class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int ans = mainTank * 10;
        int extra = mainTank/5;
        for(int i = 0; i < extra && additionalTank >= 1; i++)
        {
            ans += 10;
            additionalTank--;
            mainTank++;
            extra = mainTank/5;
        }
        return ans;
    }
};
