class MyCalendar {
    unordered_map<int, int> books;
public:
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for(auto[i, j] : books)
        {
            if(!(start >= j || i >= end))
            {
                return false;
            }
        }
        books[start] = end;
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
