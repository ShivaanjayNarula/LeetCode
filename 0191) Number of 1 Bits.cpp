class Solution {
public:
    int hammingWeight(uint32_t n) {
        string s = bitset<32>(n).to_string();
        int count = 0;
        int length  = s.size();
        for(int i = 0; i < length; i++)
        {
            if(s[i] == '1')
            {
                count++;
            }
        }
        return count;
    }
}; 
