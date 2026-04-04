class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto it:tokens){
            if(st.empty()) st.push(stoi(it));
            if(it=="+" || it=="-" || it=="/" || it=="*"){
                int a = st.top(); st.pop();
                int b = st.top(); st.pop();
                if(it=="+") st.push(a+b);
                else if(it=="-") st.push(b-a);
                else if(it=="*") st.push(a*b);
                else st.push(b/a);
            }else st.push(stoi(it));
            // cout<<st.top()<<endl;
        }
        return st.top();
    }
};
