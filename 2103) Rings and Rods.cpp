class Solution {
public:
    int countPoints(string rings) {
        int n = rings.length();
        int r[10] = {0};
        int b[10] = {0};
        int g[10] = {0};
        for(int i = 0; i < n; i+=2)
        {
            char color = rings[i];
            int a = rings[i+1] - '0';
            if(color == 'R')
            {
                r[a]++;
            }
            else if(color == 'G')
            {
                g[a]++;
            }
            else if(color == 'B')
            {
                b[a]++;
            }
        }
        int count = 0;
        for(int i = 0; i < 10; i++)
        {
            if(r[i] > 0 && b[i] > 0 && g[i] > 0)
            {
                count++;
            }
        }
        return count;
    }
};
