class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;

        unordered_set<int> numset(nums.begin(), nums.end());
        int longest = 0;
        for(int num : nums){
            if(numset.find(num - 1) == numset.end()){
                int current_num = num;
                int current_length = 1;
                while(numset.find(current_num + 1) != numset.end()){
                    current_num++;
                    current_length++;
                }
            longest = max(longest , current_length);
            }
        }
        return longest;
    }
};