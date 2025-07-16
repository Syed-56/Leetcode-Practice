class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int start=0, end=cols-1;
        while(start<rows & end>=0) {
            int mid = matrix[start][end];
            if(mid > target)    end--;
            else if(mid < target)   start++;
            else    return true;
        }
        return false;
    }
};