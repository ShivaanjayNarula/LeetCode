class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> cities;
        int n = paths.size();
        for(int i = 0; i < n; i++)
        {
            cities.insert(paths[i][0]);
        }
        for(int i = 0; i < n; i++)
        {
            string dest = paths[i][1];
            if(cities.find(dest) == cities.end())
            {
                return dest;
            }
        }
        return "";
    }
};
