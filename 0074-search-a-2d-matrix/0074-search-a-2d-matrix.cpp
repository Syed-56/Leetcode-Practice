class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int rowIndex=-1;
        int start=0, end=rows-1;

        while(start <= end) {
            int mid = start + (end-start)/2;
            if(matrix[mid][0] > target)     end=mid-1;
            else if (matrix[mid][0] <= target) {
                start=mid+1;
                rowIndex = mid;
            }
        }
        if(rowIndex==-1)    rowIndex=rows-1;

        int rowStart=0, rowEnd=cols-1;
        while(rowStart <= rowEnd) {
            int rowMid = rowStart + (rowEnd-rowStart)/2;
            if(matrix[rowIndex][rowMid] > target)   rowEnd = rowMid-1;
            else if(matrix[rowIndex][rowMid] < target)  rowStart = rowMid+1;
            else    return true;
        }

        return false;
    }
};