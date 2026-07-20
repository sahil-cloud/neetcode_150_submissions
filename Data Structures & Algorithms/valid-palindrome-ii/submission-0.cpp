class Solution {
public:
    bool validPalindrome(string s) {
        int n = s.size();
        int i=0,j=n-1;
        int cnt = 0;
        while(i<j){
            if(s[i] != s[j]) cnt++;
            if(cnt > 1) return false;
            i++;j--;
        }
        return true;
    }
};