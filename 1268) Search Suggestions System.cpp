class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        vector<vector<string>> ans;
        int n = products.size();
        int m = searchWord.size();
        sort(products.begin(), products.end());
        string prefix = "";
        for(int i = 0; i < m; i++)
        {
            prefix += searchWord[i];
            int j = 0;
            while(j < n && products[j] < prefix)
            {
                j++;
            }
            vector<string> temp;
            for(int k = 0; k < 3 && j+k < n; k++)
            {
                if(products[j+k].find(prefix) != 0)
                {
                    break;
                }
                temp.push_back(products[j+k]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
