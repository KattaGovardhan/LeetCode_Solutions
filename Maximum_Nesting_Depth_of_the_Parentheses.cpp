class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;
        int depth = 0;
        for(char i : s){
            if (i == '('){
                depth++;
                ans = max(ans, depth);
            }
            else if(i == ')'){
                depth--;
                
            }
        }
        return ans;
    }
};