class Solution {
public:
    int findMax(vector<int>& candies){
        int max = 0;
        for(int num : candies){
            if(num > max) max = num;
        }
        return max;
    }
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans(candies.size(), false);
        int maxi = findMax(candies);
        for(int i = 0; i < candies.size(); i++){
            if(candies[i] + extraCandies >= maxi){
                ans[i] = true;
            }
        }
        return ans;
    }
};