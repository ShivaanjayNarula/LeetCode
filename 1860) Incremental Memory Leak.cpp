class Solution {
public:
    vector<int> memLeak(int memory1, int memory2) {
        int a = 1;
        while(a <= memory1 || a <= memory2)
        {
            if(memory1 >= memory2)
            {
                memory1 -= a;
            }
            else
            {
                memory2 -= a;
            }
            a++;
        }
        return {a, memory1, memory2};
    }
};
