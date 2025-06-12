class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        int n = s.size();
        int maxi = INT_MIN;
        int index = 0;
        for(int i = 0; i < n-1; i++)
        {
            maxi = INT_MIN;
            for(int j = i+1; j < n; j++)
            {
                if(maxi <= s[j] - '0')
                {
                    maxi = s[j] - '0';
                    index = j;
                }
            }
            if(s[i] - '0' < maxi)
            {
                swap(s[i], s[index]);
                break;
            }
        }
        return stoi(s);
    }
};
