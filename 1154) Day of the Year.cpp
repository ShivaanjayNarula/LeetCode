class Solution {
public:
    int dayOfYear(string date) {
        vector<int> add{0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
        int n = date.size();
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8));
        int ans = day;
        if(((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 == 0)) && (month > 2))
        {
            ans++;
        }
        ans += add[month-1];
        return ans;
    }
};
