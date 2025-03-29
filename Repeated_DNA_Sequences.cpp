class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> ans;
        unordered_map<string, int> hashmap;
        int size = s.size();
        for(int i = 0; i < size; i++){
            string a = s.substr(i, 10);
            hashmap[a]++;
        }
        for(auto x : hashmap){
            if (x.second > 1){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};