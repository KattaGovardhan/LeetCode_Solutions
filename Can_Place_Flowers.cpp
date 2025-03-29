class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int no_zeros = 0;
        for(int num : flowerbed){
            if(num == 0) no_zeros++;
        }
        if(no_zeros % n == 0) return true;
        return false;
    }
};