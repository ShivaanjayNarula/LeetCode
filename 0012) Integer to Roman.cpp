class Solution {
public:
    string intToRoman(int num) {
        string ans = "";
        string ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        string tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        string hund[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        string thos[] = {"", "M", "MM", "MMM"};
        ans += thos[num/1000] + hund[(num%1000)/100] + tens[(num%100)/10] + ones[num%10];
        return ans;
    }
};
