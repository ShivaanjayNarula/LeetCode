class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int n = player1.size();
        int nums1 = 0;
        int nums2 = 0;
        bool check1 = false;
        bool check2 = false;
        int c1 = 0;
        int c2 = 0;
        for(int i = 0; i < n; i++)
        {
            if(player1[i] == 10 && check1 == false)
            {
                nums1 += 10;
                check1 = true;
                c1 = 0;
            }
            else if(check1 && c1 < 2)
            {
                nums1 += 2 * player1[i];
                c1++;
                if(player1[i] == 10)
                {
                    c1 = 0;
                }
            }
            else if(!check1)
            {
                nums1 += player1[i];
            }
            
            if(c1 == 2)
            {
                check1 = false;
            }
        }
        for(int i = 0; i < n; i++)
        {
            if(player2[i] == 10 && check2 == false)
            {
                nums2 += 10;
                check2 = true;
                c2 = 0;
            }
            else if(check2 && c2 < 2)
            {
                nums2 += 2 * player2[i];
                c2++;
                if(player2[i] == 10)
                {
                    c2 = 0;
                }
            }
            else if(!check2)
            {
                nums2 += player2[i];
            }
            
            if(c2 == 2)
            {
                check2 = false;
            }
        }
        if(nums1 > nums2)
        {
            return 1;
        }
        else if(nums1 < nums2)
        {
            return 2;
        }
        return 0;
    }
};
