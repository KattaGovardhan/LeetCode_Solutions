class Solution {
public:
    int add(vector<int> nums, int size){
        int sum = 0;
        for(int i = 0; i < size; i++){
            sum += nums[i];
        }
        return sum;
    }
    int minMoves2(vector<int>& nums) {
        int size = nums.size();
        int sum = add(nums, size);
        int avg = round(sum/size);
        int count = 0;
        for(int i = 0; i < size; i++){
            count += (max(nums[i],avg) - min(nums[i],avg));
        }
        return count;
    }
};