class Solution {
public:
    long long maximumPoints(vector<int>& enemyEnergies, int currentEnergy) {
        int n = enemyEnergies.size();
        long long ans = 0;
        sort(enemyEnergies.begin(), enemyEnergies.end());
        int j = n-1;
        if(enemyEnergies[0] > currentEnergy)
        {
            return 0;
        }
        while(j >= 0)
        {
            if(enemyEnergies[0] <= currentEnergy)
            {
                ans += currentEnergy/enemyEnergies[0];
                currentEnergy %= enemyEnergies[0];
            }
            else
            {
                currentEnergy += enemyEnergies[j];
                j--;
            }
        }
        return ans;
    }
};
