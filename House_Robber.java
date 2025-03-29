class Solution {
    public int rob(int[] nums) {
        int a = 0;
        for(int i=0; i< nums.length; i++){
            if(i%2 == 0){
                return a += nums[i];
            }
        }
        return a;
    }
}