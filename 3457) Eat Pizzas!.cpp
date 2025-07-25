class Solution {
public:
    long long maxWeight(vector<int>& pizzas) {
        int n = pizzas.size();
        long long ans = 0;
        sort(pizzas.begin(), pizzas.end());
        int id = n-1;
        for(int i = 1; i <= n/4; i+=2)
        {
            ans += pizzas[id--];
        }
        id--;
        for(int i = 2; i <= n/4; i+=2)
        {
            ans += pizzas[id];
            id-=2;
        }
        return ans;
    }
};
