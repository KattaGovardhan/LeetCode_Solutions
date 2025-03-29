#include <vector>
#include <unordered_map>
#include <cmath>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        vector<unordered_map<int, int>> dp(n); // dp[i] will store the longest subsequence ending at index i with a given difference
        int result = 1; // The minimum length of any subsequence is 1
        
        // Traverse the array and calculate subsequences
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                // Calculate the absolute difference
                int diff = abs(nums[i] - nums[j]);
                
                // If there's already a subsequence ending at j with this difference, extend it
                dp[i][diff] = max(dp[i][diff], dp[j][diff] + 1);
                
                // Always ensure that we can start a new subsequence with this difference
                dp[i][diff] = max(dp[i][diff], 2);
                
                // Update the global result
                result = max(result, dp[i][diff]) ;
            }
        }
        
        return result + 1 ;
    }
};
