class Solution {
public:
    int nthMagicalNumber(int n, int a, int b) {
        set<int> ans;
        for(int i = 1; i <= n; i++){
            ans.insert(a * i);
            ans.insert(b * i);
        }
        int count = 1;
        int sol;
        for(auto& num : ans){
            if(count == n){
                sol = num;
                break;
            }
            count++;
        }
        return sol;
    }
};