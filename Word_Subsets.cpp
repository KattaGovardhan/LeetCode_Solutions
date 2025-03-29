class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        unordered_map<char, int> requiredFreq;
        for (const string& word : words2) {
            unordered_map<char, int> wordFreq;
            for (char c : word) {
                wordFreq[c]++;
            }
            for (unordered_map<char, int>::const_iterator it = wordFreq.begin(); it != wordFreq.end(); ++it) {
                char currentChar = it->first;
                int count = it->second;
                requiredFreq[currentChar] = max(requiredFreq[currentChar], count);
            }
        }
        vector<string> result;
        for (const string& word : words1) {
            unordered_map<char, int> wordFreq;
            for (char c : word) {
                wordFreq[c]++;
            }
            
            bool isUniversal = true;
            for (unordered_map<char, int>::const_iterator it = requiredFreq.begin(); it != requiredFreq.end(); ++it) {
                char currentChar = it->first;
                int requiredCount = it->second;
                if (wordFreq[currentChar] < requiredCount) {
                    isUniversal = false;
                    break;
                }
            }
            
            if (isUniversal) {
                result.push_back(word);
            }
        }
        
        return result;
    }
};