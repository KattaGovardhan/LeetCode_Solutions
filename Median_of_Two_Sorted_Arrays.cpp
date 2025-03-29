class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> mergeArr;
        int i = 0;
        int j = 0;

        while(i < m && j < n){
            if(nums1[i] <= nums2[j]){
                mergeArr.push_back(nums1[i]);
                i++;
            }
            else if(nums2[j] < nums1[i]){
                mergeArr.push_back(nums2[j]);
                j++;
            }
        }
        while(i < m){
            mergeArr.push_back(nums1[i]);
            i++;
        }
        while(j < n){
            mergeArr.push_back(nums2[j]);
            j++;
        }

        int size = mergeArr.size();
        double ans;
        if (size % 2 != 0) {
            int mid = size / 2;
            ans = mergeArr[mid];
        } else {
            int mid = size / 2;
            ans = (mergeArr[mid - 1] + mergeArr[mid]) / 2.0;
        }
        return ans;
    }
};