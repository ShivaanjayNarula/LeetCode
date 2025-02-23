class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int check = numBottles;
        int add = 0;
        while(check >= numExchange)
        {
            check = check - numExchange + 1;
            numExchange++;
            add++;
        }
        int ans;
        ans = numBottles + add;
        return ans;
    }
};
