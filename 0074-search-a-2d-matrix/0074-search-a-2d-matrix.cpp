class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int start=0, end = rows*cols-1;
        while (start <= end) {
            int mid = start + (end-start)/2;
            int rowIndex = mid/cols;
            int colIndex = mid%cols;

            if(matrix[rowIndex][colIndex] > target)  end = mid-1;
            else if(matrix[rowIndex][colIndex] < target)    start = mid+1;
            else    return true;
        }
        return false;
    }
};