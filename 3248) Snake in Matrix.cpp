class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int x = 0;
        int y = 0;
        int n1 = commands.size();
        for(int i = 0; i < n1; i++)
        {
            if(commands[i] == "UP")
            {
                x--;
            }
            else if(commands[i] == "DOWN")
            {
                x++;
            }
            else if(commands[i] == "RIGHT")
            {
                y++;
            }
            else if(commands[i] == "LEFT")
            {
                y--;
            }
        }
        return x*n + y;
    }
};
