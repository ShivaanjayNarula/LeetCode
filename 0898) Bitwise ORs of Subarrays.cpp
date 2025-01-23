class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int> ans;
        set<int> check;
        for(int i : arr)
        {
            set<int> add;
            add.insert(i);
            for(int j : check)
            {
                add.insert(i|j);
            }
            check = add;
            for(int j : check)
            {
                ans.insert(j);
            }
        }
        return ans.size();
    }
};
