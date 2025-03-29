class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int>ans;
        for(auto x: nums){
            ans[x]++;
        }
        vector<int> sol;
        for(auto& num: ans){
            if(num.second >= k) sol.push_back(num.first);
        }
        return sol;
    }
};