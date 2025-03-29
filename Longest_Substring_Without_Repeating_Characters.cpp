class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            int n = s.size();
            int max_length = 0;
            unordered_map<char, int> freq;  // Store the frequency of characters
            
            int start = 0;  // Start index of the sliding window
            for(int end = 0; end < n; end++) {
                // If the character is already in the map, move the start index
                if(freq.find(s[end]) != freq.end()) {
                    start = max(start, freq[s[end]] + 1);  // Move the start to the right of the last occurrence of the current character
                }
                // Update the frequency of the character
                freq[s[end]] = end;
                
                // Calculate the length of the current window and update max_length
                max_length = max(max_length, end - start + 1);
            }
            
            return max_length;
        }
    };    