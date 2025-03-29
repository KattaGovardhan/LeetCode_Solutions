class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX;
        int minindex = 0;
        int max = INT_MIN;
        for(int i=0; i < prices.size(); i++){
            if(prices[i] < min){
                min = prices[i];
                minindex = i;
            }
        }
        for(int i = minindex; i < prices.size(); i++){
            if(prices[i] > max){
                max = prices[i];
            }
        }
        return max - min;
    }
};