class Solution {
public:
    bool hasMatch(string s, string p) {
        size_t starPos = p.find('*');
        string prefix = p.substr(0, starPos);
        string suffix = p.substr(starPos + 1);
        if (s.length() < prefix.length() + suffix.length()) {
            return false;
        }
        for (size_t i = 0; i <= s.length() - prefix.length(); ++i) {
            if (s.substr(i, prefix.length()) == prefix) {
                if (s.substr(s.length() - suffix.length()) == suffix) {
                    return true;
                }
            }
        }
        return false;
    }
};
