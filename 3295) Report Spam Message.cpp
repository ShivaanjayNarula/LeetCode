class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        unordered_set<string> st;
        for(auto it : bannedWords)
        {
            st.insert(it);
        }
        int count = 0;
        for(auto it : message)
        {
            if(st.find(it) != st.end())
            {
                count++;
            }
        }
        if(count > 1)
        {
            return true;
        }
        return false;
    }
};
