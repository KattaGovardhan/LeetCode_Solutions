class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        for(auto num : arr){
            freq[num]++;
        }
        unordered_set<int> uniq;
        for(auto num : freq){
            uniq.insert(num.second);
        }
        return freq.size() == uniq.size();

    }
};