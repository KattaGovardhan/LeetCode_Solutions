class Solution {
    private boolean canSplit(int[] nums, int k, int maxAllowedSum) {
        int subarrayCount = 1;
        int currentSum = 0;

        for (int num : nums) {
            if (currentSum + num > maxAllowedSum) {
                subarrayCount++;
                currentSum = num;
                if (subarrayCount > k) {
                    return false;
                }
            } else {
                currentSum += num;
            }
        }

        return true;
    }

    public int splitArray(int[] nums, int k) {
        int maxElement = 0;
        int totalSum = 0;

        for (int num : nums) {
            maxElement = Math.max(maxElement, num);
            totalSum += num;
        }

        int left = maxElement;  
        int right = totalSum;   

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (canSplit(nums, k, mid)) {
                right = mid; 
            } else {
                left = mid + 1; 
            }
        }

        return left;
    }
}
