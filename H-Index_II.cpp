class Solution {
public:
    int hIndex(vector<int>& citations) {
        int numberOfPapers = citations.size();
        int low = 0;
        int high = numberOfPapers;
        while(low < high){
            int mid = low + (high - low)/2;
            if(citations[numberOfPapers - mid - 1] >= mid + 1) low = mid + 1;
            else high = mid;
        }
        return low;   
    }
};