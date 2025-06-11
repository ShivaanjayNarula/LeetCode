class Solution {
public:
    bool canTransform(string start, string end) {
        int i = 0;
        int j = 0;
        int n = start.size();
        int m = end.size();
        while(i < n || j < m)
        {
            while(start[i] == 'X')
            {
                i++;
            }
            while(end[j] == 'X')
            {
                j++;
            }
            if(start[i] != end[j])
            {
                return false;
            }
            if(start[i] == 'R' && i > j)
            {
                return false;
            }
            if(start[i] == 'L' && i < j)
            {
                return false;
            }
            i++;
            j++;
        }
        return true;
    }
};
