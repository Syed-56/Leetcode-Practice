class Solution {
public:
    
    bool validMoves(vector<vector<int>>& grid, int row, int col, int n, int currMove) {
        if(row<0 || col<0 || row>=n || col>=n || currMove != grid[row][col]) {
            return false;
        }
        if(currMove==(n*n)-1) {
            return true;
        }

        int move1 = validMoves(grid,row+2,col+1,n,currMove+1);
        int move2 = validMoves(grid,row+2,col-1,n,currMove+1);
        int move3 = validMoves(grid,row-2,col+1,n,currMove+1);
        int move4 = validMoves(grid,row-2,col-1,n,currMove+1);
        int move5 = validMoves(grid,row+1,col+2,n,currMove+1);
        int move6 = validMoves(grid,row+1,col-2,n,currMove+1);
        int move7 = validMoves(grid,row-1,col+2,n,currMove+1);
        int move8 = validMoves(grid,row-1,col-2,n,currMove+1);

        return move1 || move2 || move3 || move4 || move5 || move6 || move7 || move8;
    }

    bool checkValidGrid(vector<vector<int>>& grid) {
        int n = grid.size();
        int startRow=0, startCol=0, currMove=0;
        return validMoves(grid,0,0,n,0);
    }
};