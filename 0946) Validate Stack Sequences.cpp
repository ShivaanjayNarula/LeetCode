class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n1 = pushed.size();
        int n2 = popped.size();
        int j = 0;
        stack<int> st;
        for(int i = 0; i < n1; i++)
        {
            st.push(pushed[i]);
            while(j <= i && st.top() == popped[j])
            {
                st.pop();
                j++;
            }
        }
        while(j < n2)
        {
            if(st.top() != popped[j])
            {
                return false;
            }
            st.pop();
            j++;
        }
        return true;
    }
};
