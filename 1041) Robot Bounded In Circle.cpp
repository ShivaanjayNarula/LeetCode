class Solution {
public:
    bool isRobotBounded(string instructions) {
        int n = instructions.size();
        char ch1 = 'N';
        int x = 0;
        int y = 0;
        for(int i = 0; i < n; i++)
        {
            char ch2 = instructions[i];
            if(ch2 == 'G')
            {
                if(ch1 == 'N')
                {
                    y += 1;
                }
                else if(ch1 == 'S')
                {
                    y -= 1;
                }
                else if(ch1 == 'E')
                {
                    x += 1;
                }
                else if(ch1 == 'W')
                {
                    x -= 1;
                }
            }
            else
            {
                if(ch1 == 'N')
                {
                    if(ch2 == 'L')
                    {
                        ch1 = 'W';
                    }
                    else if(ch2 == 'R')
                    {
                        ch1 = 'E';
                    }
                }
                else if(ch1 == 'S')
                {
                    if(ch2 == 'L')
                    {
                        ch1 = 'E';
                    }
                    else if(ch2 == 'R')
                    {
                        ch1 = 'W';
                    }
                }
                else if(ch1 == 'E')
                {
                    if(ch2 == 'L')
                    {
                        ch1 = 'N';
                    }
                    else if(ch2 == 'R')
                    {
                        ch1 = 'S';
                    }
                }
                else if(ch1 == 'W')
                {
                    if(ch2 == 'L')
                    {
                        ch1 = 'S';
                    }
                    else if(ch2 == 'R')
                    {
                        ch1 = 'N';
                    }
                }
            }
        }
        if((x == 0 && y == 0) || ch1 != 'N')
        {
            return true;
        }
        return false;
    }
};
