class MyStack {
public:
    queue<int> q1;
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        int sz = q1.size();
        while(sz > 1) {q1.push(q1.front()); q1.pop(); sz--;}
        int rv = q1.front();
        q1.pop();
        return rv;
    }
    
    int top() {
        int sz = q1.size();
        while(sz > 1) {q1.push(q1.front()); q1.pop(); sz--;}
        int rv = q1.front();
        q1.push(rv);
        q1.pop();
        return rv;
    }
    
    bool empty() {
        return q1.size() == 0 ? 1:0;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */