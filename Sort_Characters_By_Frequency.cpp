class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;
        multimap<int,char> rep;
        string ans="";

        for(auto a : s)
            freq[a]++;

        for(auto it : freq)
            rep.insert({it.second, it.first});

        for(auto it = rep.rbegin(); it != rep.rend(); ++it)
            ans += string(it->first, it->second);
        return ans;
    }
};