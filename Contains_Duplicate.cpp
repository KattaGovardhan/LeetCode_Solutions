class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::set<int> uniqueSet(nums.begin(), nums.end());
        return nums.size() != uniqueSet.size();
    }
};