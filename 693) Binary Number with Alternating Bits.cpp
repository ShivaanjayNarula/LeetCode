class Solution {
public:
    bool hasAlternatingBits(int n) {
        vector<int> binary;
        while(n > 0)
        {
            if(n == 1)
            {
                binary.push_back(1);
                break;
            }
            int temp = n % 2;
            binary.push_back(temp);
            n /= 2;
        }
        int m = binary.size();
        for(int i = 0; i < m-1; i++)
        {
            if(binary[i] == binary[i+1])
            {
                return false;
            }
        }
        return true;
    }
};
