class Solution {
public:
    int mySqrt(int x) {
        int low = 1;
        int high = x;
        while(low < high){
            int mid = (low + high)/2;
            if(mid*mid <= x) return mid;
            else{
                high = mid;
            }
        }
        return low;
    }
};