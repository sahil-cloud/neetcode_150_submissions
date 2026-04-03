class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> mp(26,0);
        if(s.size() != t.size()) return false;
        for(auto it:s) mp[(int)it-'a']++;
        for(auto it:t) mp[(int)it-'a']--;
        for(int i=0;i<25;i++) {
            if(mp[i] > 0) return false;
        }
        return true;
    }
};
