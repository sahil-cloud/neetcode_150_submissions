class Solution {
public:
    bool isPalindrome(string s,int i,int j){
        if(i>=j) return true;
        while(i<j){
            if(s[i] != s[j]) return false;
            i++;j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n = s.size();
        int i=0,j=n-1;
        int cnt = 0;
        while(i<j){
            if(s[i] != s[j]) {
                return isPalindrome(s, i + 1, j) || isPalindrome(s, i, j - 1);
            }
            i++;j--;
        }
        return true;
    }
};