class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_product = 0;
        int product = 1;
        for(int num : nums){
            product *= num;
            max_product = max(product, max_product);
        }
        return max_product;
    }
};