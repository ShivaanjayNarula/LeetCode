class Solution {
public:
    bool equalFrequency(string word) {
        vector<int> nums(26, 0);
        for(auto i : word)
        {
            nums[i - 'a']++;
        }
        for(int i = 0; i < 26; i++)
        {
            vector<int> temp = nums;
            if(temp[i] <= 0)
            {
                continue;
            }
            temp[i] -= 1;
            set<int> st;
            for(int j = 0; j < temp.size(); j++)
            {
                if(temp[j] > 0)
                {
                    st.insert(temp[j]);
                }
            }
            if(st.size() == 1)
            {
                return true;
            }
        }
        return false;
    }
};
