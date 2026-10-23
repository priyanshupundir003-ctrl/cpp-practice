class MinStack { // 0(1) space
    stack<int> st;
    stack<int> minst;
public:
    MinStack() {
        
    }
    
    void push(int value) {
        st.push(value);
        if(minst.size() == 0 or value <= minst.top()) minst.push(value);
    }
    
    void pop() {
    if(st.top() == minst.top())
        minst.pop();

    st.pop();
}
    
    int top() {
        return st.top();
    }
    
    int getMin() {
       return minst.top();
    }
};
