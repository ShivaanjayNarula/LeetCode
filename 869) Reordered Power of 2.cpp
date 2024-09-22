class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string str = to_string(n);
        sort(str.begin(), str.end());
        long int num;
        int count = 0;
        while(true)
        {
            num = pow(2, count++);
            string temp = to_string(num);
            if(temp.length() > str.length())
            {
                break;
            }
            sort(temp.begin(), temp.end());
            if(str == temp)
            {
                return true;
            }
        }
        return false;
    }
};
