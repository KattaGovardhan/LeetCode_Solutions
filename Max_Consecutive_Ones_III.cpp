class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int max_length = 0;
        int l = 0;
        int r = 0;
        int n = nums.size();
        int zeros = 0;
        while(r <= n){
            if(nums[r] == 0) zeros++;
            while(zeros > k){
                if(nums[l] == 0) zeros--;
                l++;
                if(zeros <= k){
                    int length = r - l + 1;
                    max_length = max(length, max_length);
                }
            }
            r++;            
        }
        return max_length;        
    }
};