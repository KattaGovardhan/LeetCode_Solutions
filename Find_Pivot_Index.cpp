class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum = 0;
        int rightSum = 0;
        int size = nums.size();
        for(int start = 0; start < size; start++){
            leftSum += nums[start];
        }
        for(int end = 0; end < size; end++){
            leftSum -= nums[end];
            if(leftSum == rightSum) return end;
            rightSum += nums[end]; 
        }
        return -1;
    }
};