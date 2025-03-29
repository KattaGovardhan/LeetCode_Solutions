class Solution {
public:
    int findMaxValue(vector<int>& weights){
        int max = INT_MIN;
        for(int num : weights){
            if(num > max){
                max = num;
            }
        }
        return max;
    }
    int findTotalWeight(vector<int>& weights){
        int sum = 0;
        for(int num : weights){
            sum += num;
        }
        return sum;
    }
    int findDays(vector<int>& weights, int capacity){
        int days = 1;
        int load = 0;
        int size = weights.size();
        for(int i = 0; i < size; i++){
            if(load + weights[i] > capacity){
                days += 1;
                load = weights[i];
            }
            else{
                load += weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int max_value = findMaxValue(weights);
        int total_weight = findTotalWeight(weights);
        while(max_value < total_weight){
            int capacity = (max_value + total_weight)/2;
            int days_required = findDays(weights, capacity);
            if(days_required > days){
                max_value  = capacity + 1;
            }
            else{
                total_weight = capacity;
            }
        }
        return max_value;
    }
};