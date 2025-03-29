class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        int left = 0;
        int right = 0;
        while (right < s.size()) {
            if (s[right] == ' ') {
                right++;
                left = right;
                continue;
            }
            string word = "";
            while (right < s.size() && s[right] != ' ') {
                word += s[right];
                right++;
            }
            words.push_back(word);
        }
        string ans = "";
        for (int i = words.size() - 1; i >= 0; i--) {
            ans += words[i];
            if (i != 0) ans += ' ';  
        }
        return ans;
    }
};