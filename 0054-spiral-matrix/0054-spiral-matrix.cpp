class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int> array;

        int element,lap=0, count=0;
        int midIndex = (rows*cols);
        while (count != midIndex) {
            for(int i=lap; i<cols-lap && count < midIndex; i++) {
                element = matrix[lap][i];
                array.push_back(element);
                count++;
            }
            for(int i=lap+1; i<rows-lap && count < midIndex; i++) {
                element = matrix[i][cols-1-lap];
                array.push_back(element);
                count++;
            }
            for(int i=cols-2-lap; i>=lap && count < midIndex; i--) {
                element = matrix[rows-1-lap][i];
                array.push_back(element);
                count++;
            }
            for(int i=rows-2-lap; i>lap && count < midIndex; i--) {
                element = matrix[i][lap];
                array.push_back(element);
                count++;
            }
            lap++;
        }

        return array;
    }
};