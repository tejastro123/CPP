// // SUDOKU SOLVER PROBLEM 

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// bool isSafe(vector<vector<char>> &board, int row, int col, int dig){
//     //horizontal
//     for(int i=0; i<9; i++){
//         if(board[row][i]==dig) return false; 
//     }
    
//     //vertical
//     for(int i=0; i<9; i++){
//         if(board[i][col]==dig) return false;
//     }
    
//     //grid
//     int srow = (row/3)*3;
//     int scol = (col/3)*3;
    
//     for(int i=srow; i<srow+2; i++){
//         for(int j=scol; j<scol+2; j++){
//             if(board[i][j]==dig) return false;
//         }
//     }
    
//     return true;
// }
// bool helper(vector<vector<char>> &board, int row, int col){
//     if(row==9){
//         return true;
//     }

//     int nextrow = row , nextcol = col+1;
//     if(nextcol==9){
//         nextrow = row+1;
//         nextcol = 0;
//     }
    
//     if(board[row][col]!='.'){
//         return helper(board, nextrow, nextcol);
//     }

//     //place the digit
//     for(char dig='1'; dig<='9';dig++){
//         if(isSafe(board,row,col,dig)){
//             board[row][col] = dig;
//             if(helper(board, nextrow, nextcol)){
//                 return true;
//             }
//             board[row][col] = '.';
//         }
//     }
//     return false;
// }


// void solveSudoku(vector<vector<char>> &board){
//     helper(board,0,0);
// }
// // TC = O(9^(no.of empty cells))
// int main()
// {
//     vector<vector<char>> board = {{'5','3','.','.','7','.','.','.','.'},
//                                   {'6','.','.','1','9','5','.','.','.'},
//                                   {'.','9','8','.','.','.','6','.','.'},
//                                   {'8','.','.','.','6','.','.','.','3'},
//                                   {'4','.','.','8','.','3','.','.','1'},
//                                   {'7','.','.','.','2','.','.','.','6'},
//                                   {'.','6','.','.','.','.','2','8','.'},
//                                   {'.','.','.','4','1','9','.','.','5'},
//                                   {'.','.','.','.','8','.','.','7','.'},};
//     solveSudoku(board);
//     for(int i=0; i<9; i++){
//         for(int j=0; j<9; j++){
//             cout<<board[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }