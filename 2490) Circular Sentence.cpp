class Solution {
public:
    bool isCircularSentence(string s) {
        int n = s.size();
        stringstream ss(s);
        string temp = "";
        char last = s[n-1];
        while(getline(ss, temp, ' '))
        {
            if(last != temp[0])
            {
                return false;
            }
            last = temp.back();
        }
        return true;
    }
};
