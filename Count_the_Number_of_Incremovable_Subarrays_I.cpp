class Solution {
public:
    bool incresesubarray(vector<int> arr, int start, int end){
        int size = arr.size();
        int previous = 0;
        for(int i = 0; i < size; i++){
            if(i <= end && i >= start){
                continue;
            }
            if(arr[i] <= previous){
                return false;
            }
            previous = arr[i];
        }
        return true;
    }

    int incremovableSubarrayCount(vector<int>& nums) {
        int count = 0;
        int size = nums.size();
        for(int i = 0; i < size; i++){
            for(int j = i; j < size; j++){
                if(incresesubarray(nums, i, j)){
                    count++;
                }
            }
        }
        return count;
    }
};