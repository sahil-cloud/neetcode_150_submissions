class Solution {
public:

/*
Encoding
If the input list is empty, return an empty string.
Create an empty list to store the sizes of each string.
For each string, append its length to the sizes list.
Build a single string by:
Writing all sizes separated by commas.
Adding a '#' to mark the end of the size section.
Appending all the actual strings in order.
Return the final encoded string.
Decoding
If the encoded string is empty, return an empty list.
Read characters from the start until reaching '#' to extract all recorded sizes:
Parse each size by reading until a comma.
After the '#', extract substrings according to the sizes list:
For each size, read that many characters and append the substring to the result.
Return the list of decoded strings.
*/

    string encode(vector<string>& strs) {
        //storing length of strings along with the string in the start
        //will help decoding the string
        string res;
        for(auto it:strs){
            int n = it.size();
            res += to_string(n);
        }
        res += '#';
        for(auto it:strs){
            res += it;
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        if(s.size() == 0) return ans;
        string s1;
        for(int i=0;i<s.size();i++){
            if(s[i] == '#') {
                s = s.substr(i+1);
                break;
            }
            s1+=s[i];
        }
        int i=0;
        for(auto it:s1){
            int n = (int)it-'0';
            string tmp;
            int j = i;
            for(;i<j+n;i++){
                tmp += s[i];
            }
            ans.push_back(tmp);
        }
        return ans;

    }
};
