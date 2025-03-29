class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l = 0;
        int r = 0;
        int max_length = 0;
        int n = fruits.size();
        map<int, int> freq;
        while(r < n){
            freq[fruits[r]]++;
            r++;
            if(freq.size() > 2){
                freq[fruits[l]]--;
                if(freq[fruits[l]] == 0) freq.erase(freq[fruits[l]]);
                l++;
            }
            if(freq.size() <= 2) max_length = max(max_length, r - l );
            r++;
        }
        return max_length;
        
    }
};