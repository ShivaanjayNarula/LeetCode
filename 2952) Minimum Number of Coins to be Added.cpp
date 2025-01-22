class Solution {
public:
    int minimumAddedCoins(vector<int>& coins, int target) {
        sort(coins.rbegin(), coins.rend());
        long long add = 0;
        int ans = 0;
        for(int i = 1; i <= target; i++)
        {
            while(!coins.empty() && coins.back() <= i)
            {
                add += coins.back();
                coins.pop_back();
            }
            if(i > add)
            {
                add += i;
                ans++;
            }
        }
        return ans;
    }
};
