class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int> days{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int as = accumulate(days.begin(),  days.begin() + stoi(arriveAlice.substr(0, 2)) - 1, 0) + stoi(arriveAlice.substr(3, 2));
        int al = accumulate(days.begin(),  days.begin() + stoi(leaveAlice.substr(0, 2)) - 1, 0) + stoi(leaveAlice.substr(3, 2));
        int bs = accumulate(days.begin(), days.begin() + stoi(arriveBob.substr(0, 2)) - 1, 0) + stoi(arriveBob.substr(3, 2));
        int bl = accumulate(days.begin(), days.begin() + stoi(leaveBob.substr(0, 2)) - 1, 0) + stoi(leaveBob.substr(3, 2));
        int ans = min(al, bl) - max(as, bs) + 1;
        if(ans < 0)
        {
            return 0;
        }
        return ans;
    }
};
