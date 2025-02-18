class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int n1 = target.size();
        int index = 0;
        int check = 1;
        while(index < n1)
        {
            if(target[index] == check)
            {
                ans.push_back("Push");
                index++;
            }
            else
            {
                ans.push_back("Push");
                ans.push_back("Pop");
            }
            check++;
        }
        return ans;
    }
};
