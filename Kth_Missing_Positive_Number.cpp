class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i = 0;
        int missing = 0;
        int current = 1;
        int size = arr.size();
        while(missing < k){
            if(i < size && arr[i] == current){
                i++;
            }
            else{
                missing++;
            }
            current++;
        }
        return current - 1;
    }
};