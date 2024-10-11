class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int a;
        a = purchaseAmount % 10;
        if(a >= 5)
        {
            purchaseAmount = purchaseAmount + 10 - a;
        }
        else
        {
            purchaseAmount = purchaseAmount - a;
        }
        return 100 - purchaseAmount;
    }
};
