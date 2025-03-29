class Solution {
public:
    bool possible(vector<int>& bloomDay, int mid, int m, int k){
        int count = 0;
        int bloom = 0;
        for(int i = 0; i < bloomDay.size(); i++){
            if(bloomDay[i] <= mid) count++;
            else{
                bloom += (count/ k);
                count = 0;
            }
        }
        bloom += (count / k);
        return bloom >= m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int size = bloomDay.size();
        long long val = m * 1LL * k * 1LL;
        if(val > size) return -1;

        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i = 0; i < size; i++){
            mini = min(bloomDay[i], mini);
            maxi = max(bloomDay[i], maxi);
        }

        int low = mini;
        int high = maxi;
        while(low <= high){
            int mid = (low + high) / 2;
            if(possible(bloomDay, mid, m, k)) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};