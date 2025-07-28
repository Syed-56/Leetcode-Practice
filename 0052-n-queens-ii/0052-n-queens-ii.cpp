class Solution {
public:
    bool isSafe(vector<string>& board, int row, int col, int n) {
        //horizontal check
        for(int i=0; i<row; i++) {
            if(board[i][col]=='Q')  return false;
        }
        //vertical check
        for(int j=0; j<col; j++) {
            if(board[row][j]=='Q')  return false;
        }

        //left diagonal
        for(int i=row,j=col; i>=0 && j>=0; i--,j--) {
            if(board[i][j]=='Q')    return false;
        }
        //right diagonal
        for(int i=row,j=col; i>=0 && j<n; i--,j++) {
            if(board[i][j]=='Q')    return false;
        }
        return true;
    }
    int count=0;
    int backTrack(vector<vector<string>>& ans, vector<string>& board, int row, int n) {
        if(row==n) {
            count++;
            ans.push_back(board);
            return count;
        }

        for(int col=0; col<n; col++) {
            if(isSafe(board,row,col,n)) {
                board[row][col] = 'Q';
                backTrack(ans,board,row+1,n);
                board[row][col] = '.';
            }
        }
        return count;
    }
    int totalNQueens(int n) {
        vector<vector<string>> allPairs;
        vector<string> board(n,string(n,'.'));
        return backTrack(allPairs,board,0,n);
    }
};