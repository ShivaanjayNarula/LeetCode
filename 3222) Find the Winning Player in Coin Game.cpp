class Solution {
public:
    string losingPlayer(int x, int y) {
        bool check = false;
        while(x >= 1 && y >= 4)
        {
            x-=1;
            y-=4;
            check = !check;
        }
        if(check == true)
        {
            return "Alice";
        }
        return "Bob";
    }
};
