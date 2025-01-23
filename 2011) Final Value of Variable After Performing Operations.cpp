class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n = operations.size();
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(operations[i] == "X++")
            {
                ans++;
            }
            if(operations[i] == "++X")
            {
                ++ans;
            }
            if(operations[i] == "X--")
            {
                ans--;
            }
            if(operations[i] == "--X")
            {
                --ans;
            }
        }
        return ans;
    }
};
