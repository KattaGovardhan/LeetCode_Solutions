class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int size = gain.size();
        int sum = 0;
        int ans = INT_MIN;
        for(int num : gain){
            sum += num;
            ans = max(ans, sum);
        }
        if (ans < 0) return 0;
        return ans;
    }
};