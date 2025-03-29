class Solution {
    public int findNumbers(int[] nums) {
        int count = 0;
        for(int i=0; i < nums.length; i++){
            int numLength = String.valueOf(nums[i]).length();
            if(numLength%2 == 0){
                count += 1;   
            }
        }
        return count;
    }
}