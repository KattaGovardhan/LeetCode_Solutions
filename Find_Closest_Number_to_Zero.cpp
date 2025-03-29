class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int closest = abs(nums[0]);
        for(int i = 1; i < nums.size(); i++){
            if(abs(nums[i]) < closest){
                closest = abs(nums[i]);
            }
        }
        return closest;
    }
};