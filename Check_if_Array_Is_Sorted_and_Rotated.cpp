class Solution {
public:
    bool check(vector<int>& nums) {
        int size = nums.size();
        int left = 0;
        int right = size - 1;
        int mid = (left + right)/ 2;
        for(int i = left; i < mid; i++){
            if(nums[i] > nums[i + 1]) return false;
        }
        for(int i = mid + 1; i < right; i++){
            if(nums[i] > nums[i+1]) return false;
        }
        return true;
    }
};