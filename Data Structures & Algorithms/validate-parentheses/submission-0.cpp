class Solution {
public:
    bool isValid(string s) {
      stack<char> st;
      for(char ch:s){
        if(st.empty() || st.top() == '(' || st.top() == '{' || st.top() == '[') st.push(ch);
        else if((ch == ')' && st.top() == '(') || (ch == '}' && st.top() == '{') || (ch == ']' && st.top() == '[') ) st.pop();
      }
    //   cout<<st.empty()<<endl; 
      return !st.empty(); 
    }
};
