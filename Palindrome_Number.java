class Solution {
    public boolean isPalindrome(int x) {
        if (x<0 || x%10 == 0 && x!=0){
            return false;
        }
        int orginal = x;
        int reverse = 0;
        while(x > 0){
            int a = x %10;
            reverse = reverse*10 + a;
            x /= 10;
        }
        return orginal == reverse;
    }
}