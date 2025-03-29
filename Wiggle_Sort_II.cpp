class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int size = nums.size();
        for (int i = 0; i < size - 1; i++) {
            if ((i % 2 == 0 && nums[i] > nums[i + 1]) || (i % 2 != 0 && nums[i] < nums[i + 1])) {
                swap(nums[i], nums[i + 1]);
            }
        }
    }
};