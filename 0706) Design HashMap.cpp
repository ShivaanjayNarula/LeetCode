class MyHashMap {
public:
    int add[1000001];
    MyHashMap() {
        memset(add, -1, sizeof(add));
    }
    
    void put(int key, int value) {
        add[key] = value;
    }
    
    int get(int key) {
        return add[key];
    }
    
    void remove(int key) {
        add[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
