class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int r = 0;
        int max_length = 0;
        int n = s.size();
        unordered_map<char,int> freq;
        while(r < n){
            freq[s[r]]++;
            r++;
            if(freq.size() > k){
                freq[s[l]]--;
                if(freq.size() == 0) freq.erase(s[l]);
                l++;
            }
            max_length = max(max_length, r - l + 1);
            r++;
        }
        return max_length;
    }
};