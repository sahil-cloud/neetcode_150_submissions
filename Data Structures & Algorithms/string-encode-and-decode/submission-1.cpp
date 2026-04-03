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
        if (strs.empty()) return "";
        vector<int> sizes;
        string res = "";
        for (string& s : strs) {
            sizes.push_back(s.size());
        }
        for (int sz : sizes) {
            res += to_string(sz) + ',';
        }
        res += '#';
        for (string& s : strs) {
            res += s;
        }
        return res;
    }

    vector<string> decode(string s) {
        if (s.empty()) return {};
        vector<int> sizes;
        vector<string> res;
        int i = 0;
        while (s[i] != '#') {
            string cur = "";
            while (s[i] != ',') {
                cur += s[i];
                i++;
            }
            sizes.push_back(stoi(cur));
            i++;
        }
        i++;
        for (int sz : sizes) {
            res.push_back(s.substr(i, sz));
            i += sz;
        }
        return res;
    }
};
