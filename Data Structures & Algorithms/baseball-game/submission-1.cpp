class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(auto it:operations){
            if(it == "+"){
                int n1 = st.top(); st.pop();
                int n2 = st.top(); st.pop();
                st.push(n2); st.push(n1);
                st.push(n1+n2);
            }else if(it == "C"){
                if(!st.empty()) st.pop();
            }else if(it == "D"){
                st.push(st.top()*2);
            }else{
                st.push(stoi(it));
            }
        }
        int sum = 0;
        while(!st.empty()){
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};