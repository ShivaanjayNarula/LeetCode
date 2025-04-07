class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        int check = 0;
        vector<string> days = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        if(month < 3)
        {
            month += 12;
            year--;
        }
        check = year / 100;
        year %= 100;
        int i = (check / 4 - 2 * check + year + year/4 + 13 * (month+1) / 5 + day - 1) % 7;
        return days[(i + 7) % 7 ];
    }
};
