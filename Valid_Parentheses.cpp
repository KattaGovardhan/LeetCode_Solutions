class Solution {
public:
    bool isValid(string s) {
        int openRound = 0;
        int closeRound = 0;
        
        int openSquare = 0;
        int closeSquare = 0;

        int openFlower = 0;
        int closeFlower = 0;

        for(char i : s){
            if(i == '(') openRound++;
            else if(i == ')') closeRound++;
            else if(i == '[') openSquare++;
            else if(i == ']') closeSquare++;
            else if(i == '{') openFlower++;
            else closeFlower++;
        }
        if(openRound != closeRound || openSquare != closeSquare || openFlower != closeFlower) return false;
        return true;
    }
};