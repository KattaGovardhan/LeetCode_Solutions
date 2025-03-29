class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans(size, 0);
        int pos = 0;
        int neg = 1;
        for(int i = 0; i < size; i++){
            if(nums[i] > 0){
                ans[i] = nums[pos];
                pos += 2;
            }
            else{
                ans[i] = nums[neg];
                neg += 2;
            }
        }
        return ans;
    }
};