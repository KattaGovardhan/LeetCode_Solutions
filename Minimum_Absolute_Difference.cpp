class Solution {
public:
    int minimumAbsoulteDistance(vector<int>& arr){
        int distance = INT_MAX;
        for(int i = 1; i < arr.size(); i++){
            if((arr[i] - arr[i - 1]) < distance) distance = arr[i] - arr[i - 1];
        }
        return distance;
    }
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        int mad = minimumAbsoulteDistance(arr);
        for(int i = 0; i < arr.size() - 1; i++){
            if(arr[i + 1] - arr[i] == mad) ans.push_back({arr[i], arr[i + 1]});
        }
        return ans;
    }
};