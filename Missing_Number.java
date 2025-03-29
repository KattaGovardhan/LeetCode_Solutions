class Solution {
    public int missingNumber(int[] nums) {
        int max_sum = 0;
        int n = nums.length;
        for(int i=0; i<n; i++){
            max_sum += nums[i];
        }

        return (n*(n+1)/2) - max_sum;
    }
}