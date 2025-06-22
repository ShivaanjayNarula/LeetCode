class Solution {
public:
    char kthCharacter(int k) {
        string s = "a";
        while(s.size() < k)
        {
            string temp = "";
            for(char ch : s)
            {
                if(ch == 'z')
                {
                    temp.push_back('a');
                }
                else
                {
                    temp.push_back(ch+1);
                }
            }
            s += temp;
        }
        return s[k-1];
    }
};
