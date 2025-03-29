class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        while (k > 1) {
            auto it = std::max_element(nums.begin(), nums.end());
            nums.erase(it);
            k--;
        }
        return *std::max_element(nums.begin(), nums.end());
    }
};