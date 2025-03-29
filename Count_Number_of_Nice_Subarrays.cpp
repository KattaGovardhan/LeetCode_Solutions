class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int oddCount=0;
        int count=0;
        vector<int>prefixCount(nums.size()+1,0);
        prefixCount[0] = 1;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]%2 != 0) oddCount++;
            if(oddCount >= k) count += prefixCount[oddCount-k];
            prefixCount[oddCount]++;
        }
        return count;
    }
};