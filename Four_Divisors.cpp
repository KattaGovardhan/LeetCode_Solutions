class Solution {
public:
    int getfactors(int num){
        int count = 0;
        int sum = 0;
        for(int i = 1; i*i <= num; i++) {
            if(num % i == 0){
                if(i * i == num) return 0;
                count += 2;
                sum += i;
                sum += num/i;    
            }
        }
        return count == 4 ? sum : 0;
    }
    int sumFourDivisors(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += getfactors(nums[i]);
        }
        return sum;
    }
};