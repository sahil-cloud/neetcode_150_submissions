class MinStack {
public:
    // vector<int> st;
    int st[1000001];
    int tp = -1;
    MinStack() {
        
    }
    
    void push(int val) {
        // mini = min(mini,val);
        tp++;
        // st.push_back(val);
        st[tp] = val;
        // tp++;
    }
    
    void pop() {
        tp--;
    }
    
    int top() {
        return st[tp];
    }
    
    int getMin() {
        // return mini;
        int mini = INT_MAX;
        for(int i=0;i<=tp;i++){
            mini = min(mini,st[i]);
        }
        return mini;
    }
};
