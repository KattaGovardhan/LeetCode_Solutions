class Solution {
    public:
        int romanToInt(string s) {
            int ans = 0;
            for (int i = 0; i < s.length(); i++) {
                if (i + 1 < s.length() && getValue(s[i]) < getValue(s[i + 1])) {
                    ans -= getValue(s[i]);
                } else {
                    ans += getValue(s[i]);
                }
            }
            return ans;
        }
    
    private:
        int getValue(char c) {
            if (c == 'I') return 1;
            else if (c == 'V') return 5;
            else if (c == 'X') return 10;
            else if (c == 'L') return 50;
            else if (c == 'C') return 100;
            else if (c == 'D') return 500;
            else return 1000;
        }
    };
    