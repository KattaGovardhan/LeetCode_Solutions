class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls = 0;
        int cows = 0;
        unordered_map<char, int> secretCount, guessCount;
        
        for (int i = 0; i < secret.size(); ++i) {
            if (secret[i] == guess[i]) {
                bulls++; 
            } else {
                secretCount[secret[i]]++; 
                guessCount[guess[i]]++;   
            }
        }
        for (const auto& entry : secretCount) {
            char digit = entry.first;
            if (guessCount.find(digit) != guessCount.end()) {
                cows += min(secretCount[digit], guessCount[digit]);
            }
        }
        return to_string(bulls) + "A" + to_string(cows) + "B";
    }
};