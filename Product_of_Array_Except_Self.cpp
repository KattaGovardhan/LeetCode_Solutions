class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> arr(size,1);
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                if (i != j){
                    arr[i] *= nums[j];;
                }
            }
        }
        return arr;
    }
};