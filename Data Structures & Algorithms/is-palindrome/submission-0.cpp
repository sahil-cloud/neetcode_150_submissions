class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        string s1;
        for(auto it:s){
            if(it != ' ' && ( (it>='A' && it <= 'Z') || (it >= 'a' && it <= 'z' ) 
            || ( it >= '0' && it <= '9') ) ) s1+=it;
        }
        cout<<s1<<endl;
        string t = s1;
        reverse(t.begin(),t.end());
        return s1==t;
    }
};
