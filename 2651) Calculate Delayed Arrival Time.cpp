class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int ans;
        ans = (arrivalTime + delayedTime) % 24;
        return ans;
    }
};
