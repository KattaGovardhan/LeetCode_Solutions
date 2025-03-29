class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int max_sum = 0;
        int n = nums.size();
        for(int i = 0; i < n - 1; i++){
            int sum = nums[i];
            for(int j = i + 1; j < n; j++){
                sum += nums[j];
                max_sum = max(abs(sum),max_sum);
            }
        }
        return max_sum;
    }
};