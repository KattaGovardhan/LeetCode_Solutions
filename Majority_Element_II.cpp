class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int size = nums.size();
        unordered_map<int, int> mp;
        vector<int> ans;
        for(int num:nums){
            mp[num]++;
        }
        for(auto& num : mp){
            if(num.second > size/3){
                ans.push_back(num.first);
            }
        }
        return ans;
    }
};