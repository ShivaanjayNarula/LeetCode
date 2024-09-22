class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = 0; i <= n; i++)
        {
          int count = 0;
          int j = i;
          while(j != 0)
          {
            count = count + j % 2;
            j = j / 2;
          }
          ans.push_back(count);
        }
        return ans;
    }
};
