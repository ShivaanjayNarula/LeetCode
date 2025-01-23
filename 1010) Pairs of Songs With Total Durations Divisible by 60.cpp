class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int ans = 0;
        vector<int> check(60);
        for(auto i : time)
        {
            ans += check[(600 - i) % 60];
            check[i % 60]++;
        }
        return ans;
    }
};
