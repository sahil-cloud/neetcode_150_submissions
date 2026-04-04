class Solution {
public:
    bool isValid(string s) {
      stack<char> st;
      for(char ch:s){
        if(st.empty() || ch == '(' || ch == '{' || ch == '[') st.push(ch);
        else if((ch == ')' && st.top() == '(') || (ch == '}' && st.top() == '{') || (ch == ']' && st.top() == '[') ) st.pop();
        else st.push(ch);
      }
      cout<<st.size()<<endl; 
      return st.size()==0; 
    }
};
