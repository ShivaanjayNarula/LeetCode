class Solution {
public:
    bool isValidSerialization(string preorder) {
        int check = 1;
        int n = preorder.size();
        for(int i = 0; i < n; i++)
        {
            if(preorder[i] == ',')
            {
                continue;
            }
            if(check <= 0)
            {
                return false;
            }
            if(preorder[i] == '#')
            {
                check--;
            }
            else
            {
                while(i < n && preorder[i] != '#' && preorder[i] != ',')
                {
                    i++;
                }
                check++;
                i--;
            }
        }
        if(check == 0)
        {
            return true;
        }
        return false;
    }
};
