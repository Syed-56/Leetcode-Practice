class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int index=-1, finalIndex=-1;;

        for(int i=0; i<rows; i++) {
            if(matrix[i][0] > target && i != 0) {
                index = i-1;
                break;
            }
        }
        if (index == -1) index = rows - 1;

        bool found=false;
        for(int i=0; i<cols; i++) {
            if(matrix[index][i]==target) {
                finalIndex = i;
                found=true;
                break;
            }
        }

        return found;
    }
};