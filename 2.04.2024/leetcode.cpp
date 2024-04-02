 class Solution {
public:
    bool isIsomorphic(string s, string t) {
         if (s.length() != t.length())
        return false;

    char mapST[256] = {0};
    char mapTS[256] = {0};

    for (int i = 0; i < s.length(); i++) {
        if (mapST[s[i]] == 0 && mapTS[t[i]] == 0) {
            mapST[s[i]] = t[i];
            mapTS[t[i]] = s[i];
        } else {
            if (mapST[s[i]] != t[i] || mapTS[t[i]] != s[i])
                return false;
        }
    }
     return true;
    }
   
};