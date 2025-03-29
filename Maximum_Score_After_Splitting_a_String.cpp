class Solution {
public:
    int maxScore(string s) {
        int n = s.length();
        int onesInRight = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                onesInRight++;
            }
        }

        int zerosInLeft = 0;
        int maxScore = 0;

        for (int i = 0; i < n - 1; i++) {
            if (s[i] == '0') {
                zerosInLeft++;
            } else {
                onesInRight--;
            }

            int currentScore = zerosInLeft + onesInRight;
            maxScore = max(maxScore, currentScore);
        }

        return maxScore;
    }
};