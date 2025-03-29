class Solution {
public:
    int fib(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        int last = n - 1;
        int slast = n - 2;

        return fib(last) + fib(slast);     
    }
};