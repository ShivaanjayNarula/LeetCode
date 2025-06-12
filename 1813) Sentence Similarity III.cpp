class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        vector<string> str1 = helper(sentence1);
        vector<string> str2 = helper(sentence2);
        int n1 = str1.size();
        int n2 = str2.size();
        int i = 0;
        int j = 0;
        while(i < n1 && j < n2)
        {
            if(str1[i] != str2[j])
            {
                break;
            }
            i++;
            j++;
        }
        if(i == n1 || j == n2)
        {
            return true;
        }
        while(n1-1 >= i && n2-1 >= j)
        {
            if(str1[n1-1] != str2[n2-1])
            {
                return false;
            }
            n1--;
            n2--;
        }
        return true;
    }
    vector<string> helper(string s)
    {
        vector<string> word;
        string check = "";
        for(char ch : s)
        {
            if(ch == ' ')
            {
                if(!check.empty())
                {
                    word.push_back(check);
                    check = "";
                }
            }
            else
            {
                check += ch;
            }
        }
        if(!check.empty())
        {
            word.push_back(check);
        }
        return word;
    }
};
