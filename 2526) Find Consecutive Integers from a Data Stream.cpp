class DataStream {
public:
    int i = 0;
    int check = 0;
    int count = 0;
    
    DataStream(int value, int k) {
        i = value;
        check = k;
    }
    
    bool consec(int num) {
        if(num == i)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        if(count >= check)
        {
            return true;
        }
        return false;
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */
