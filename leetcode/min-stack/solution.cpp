class MinStack {
public:
    stack<int>st, mn;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(mn.empty() || mn.top()>=val) mn.push(val);
    }
    
    void pop() {
        if(st.empty()) return ;
        int t = st.top();
        st.pop();
        if(!mn.empty() && t==mn.top()) mn.pop();
    }
    
    int top() {
        if(st.empty()) return -1;
        return st.top();
    }
    
    int getMin() {
       if(mn.empty()) return -1;
       return mn.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */