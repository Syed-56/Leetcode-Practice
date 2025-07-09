class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int peakIndex=0, peakElement = arr[0];
        for(int i=0; i<n; i++) {
            if(arr[i] > peakElement) {
                peakElement = arr[i];
                peakIndex=i;
            }
        }
        return peakIndex;
    }
};