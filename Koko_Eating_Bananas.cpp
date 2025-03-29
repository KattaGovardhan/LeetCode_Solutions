class Solution {
public:
    int calculate(vector<int>& piles, int mid){
        int hours = 0;
        int n = piles.size();
        for(int i = 0; i < n; i++){
            hours += ceil(double(piles[i])/double(mid));
        }
        return hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());

        while(left <= right){
            int mid = (left + right)/2;
            int total = calculate(piles, mid);
            if(total <= h) right = mid - 1;
            else left = mid + 1;
        }
        return left;
    }
};