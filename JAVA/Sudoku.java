public class Sudoku {
    public static void main (char args[]){
        char board[][] = {
            {'5','3','.','.','7','.','.','.','.'},
            {'6','.','.','1','9','5','.','.','.'},
            {'.','9','8','.','.','.','.','6','.'},
            {'8','.','.','.','6','.','.','.','3'},
            {'4','.','.','8','.','3','.','.','1'},
            {'7','.','.','.','2','.','.','.','6'},
            {'.','6','.','.','.','.','2','8','.'},
            {'.','.','.','4','1','9','.','.','5'},
            {'.','.','.','.','8','.','.','7','9'}
        };
        solveSudoku( board );
    }
    public static boolean helper(char [][]board, int row , int col){
        if (row == board.length) {
            return true;
        }
        int nrow = 0;
        int ncol = 0;

        if (col == board.length -1) {
            nrow = row + 1;
            ncol = 0;
        }else {
            ncol = col + 1;
            nrow = row;
        }

        if (board[row][col]!='.') {
            if (helper(board,nrow,ncol)) {
                return true;
            }else{
                for (int i = 0; i < board.length; i++) {
                    if(isSafe(board,nrow,ncol,i)){

                    }
                }
            }
        }

        return false;
    }

    public static void solveSudoku(char[][] board) {
        helper(board, 0,0);
    }
}


