class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans = INT_MAX;
        int left = 0;
        int right = nums.size() - 1;
        while(left <= right){
            int mid = left + (right - left) /2;
            if(nums[mid] >= nums[left]){
                ans = min(ans, nums[left]);
                left = mid+1;
            }
            else{
                ans = min(ans, nums[mid]);
                right = mid - 1;
            }
        }
        return ans;
    }
};