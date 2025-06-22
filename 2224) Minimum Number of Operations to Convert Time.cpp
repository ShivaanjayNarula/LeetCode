class Solution {
public:
    int convertTime(string current, string correct) {
        vector<int> time = {60, 15, 5, 1};
        int time1 = stoi(current.substr(0, 2)) * 60 + stoi(current.substr(3));
        int time2 = stoi(correct.substr(0, 2)) * 60 + stoi(correct.substr(3));
        int check = abs(time1 - time2);
        int ans = 0;
        for(auto it : time)
        {
            ans += check/it;
            check %= it;
        }
        return ans;
    }
};
