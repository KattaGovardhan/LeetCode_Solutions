class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        for(int i = 0; i < s.size() - 2; i++){
            if(s[i] == s[i + 1] && s[i] == s[i + 2]) return true;
        }
        return false;
    }
};