class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixSumCount;
        int count = 0;
        int currentPrefixSum = 0;
        
        prefixSumCount[0] = 1;
        
        for (int num : nums) {
            currentPrefixSum += num;
            
            if (prefixSumCount.find(currentPrefixSum - k) != prefixSumCount.end()) {
                count += prefixSumCount[currentPrefixSum - k];
            }
            
            prefixSumCount[currentPrefixSum]++;
        }
        
        return count;
    }
};