class Solution {
public:
    int reachNumber(int target) {
        int ans = 0;
        int sum = 0;
        target = abs(target);
        while(true)
        {
            ans++;
            sum += ans;
            if(sum == target)
            {
                return ans;
            }
            else if(sum > target && (sum - target) % 2 == 0)
            {
                return ans;
            }
        }
        return ans;
    }
};
