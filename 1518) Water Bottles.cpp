class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;
        int rem = 0;
        do
        {
            ans += numBottles / numExchange;
            rem = numBottles % numExchange;
            numBottles = numBottles / numExchange;
            numBottles = numBottles + rem;
        }while(numBottles >= numExchange);
        return ans;
    }
};
