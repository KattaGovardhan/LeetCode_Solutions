class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rowLen = matrix.size();
        int colLen = matrix[0].size();

        int left = 0;
        int right = rowLen * colLen - 1;

        while(left <= right){
            int mid = (left + right)/2;
            int row = mid / colLen;
            int col = mid % colLen;
            int ans = matrix[row][col];
            if(ans == target) return true;
            else if(ans < target) left = mid + 1;
            else right = mid - 1;
        }
        return false;
    }
};