class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int evenCount = 1;
        int oddCount = 0;
        int result = 0;
        int prefixSum = 0;
        const int MOD = 10e9 + 7;
        for(int num : arr){
            prefixSum += num;
            if(prefixSum % 2 == 0){
                result += oddCount;
                evenCount++;
            }
            else{
                result += evenCount;
                oddCount++;
            }
            result %= MOD;
        }
        return result;
    }
};