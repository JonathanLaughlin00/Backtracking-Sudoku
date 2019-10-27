//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Author: Jonathan Laughlin
// Last Modified: 10/15/2019
//
//
//
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#define N 9
using namespace std;

/*
bool isValid(char board[N][N], int row, int col, int num){ 
    int i, j;

    //check row
    for( i = 0; i <= row; i++ ){
        if( board[i][col] == num ){
            return false
        }
    } 

    //check column
    for( j = 0; j <= col; j++ ){
        if( board[row][j] == num ){
            return false
        }
    } 

    //check box
    for(i = 0; i < )
    return true; 
} 
  
/* A recursive utility function to solve N 
   Queen problem */
//bool solveNQUtil(char board[N][N], int col) 
//{ 
    /* base case: If all queens are placed 
      then return true */
    //if (col >= N) 
       // return true; 
  
    /* Consider this column and try placing 
       this queen in all rows one by one */
    //for (int i = 0; i < N; i++) { 
        /* Check if the queen can be placed on 
          board[i][col] */
        //if (isSafe(board, i, col)) { 
            /* Place this queen in board[i][col] */
            //board[i][col] = 1; 
  
            /* recur to place rest of the queens */
            //if (solveNQUtil(board, col + 1)) 
                //return true; 
  
            /* If placing queen in board[i][col] 
               doesn't lead to a solution, then 
               remove queen from board[i][col] */
            //board[i][col] = 0; // BACKTRACK 
        //} 
    //} 
  
    /* If the queen cannot be placed in any row in 
        this colum col  then return false */
    //return false; 
//} 
/*
bool solveSudoku(){ 
    char board[N][N] = { { 5, 3, ., ., 7, ., ., ., . }, 
                        { 6, ., ., 1, 9, 5, ., ., . }, 
                        { ., 9, 8, ., ., ., ., 6, . },
                        { 8, ., ., ., 6, ., ., ., 3 },
                        { 4, ., ., 8, ., 3, ., ., 1 },
                        { 7, ., ., ., 2, ., ., ., 6 },
                        { ., 6, ., ., ., ., 2, 8, . },
                        { ., ., ., 4, 1, 9, ., ., 5 },
                        { ., ., ., ., 8, ., ., 7, 9 }, 
}*/ 
  
// driver program to test above function 
int main() 
{
    
    std::cout << 3%8;
    /*solveSudoku();*/
    return 0; 
} 