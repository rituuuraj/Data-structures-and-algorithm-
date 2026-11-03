#include<iostream>
using namespace std;
#include<bits/stdc++.h>
//Sudoku Solver
//Solve Leetcode-37
class solution{
    private:
    bool isSafe(vector<vector<char>>&board,int row,int col,char digit){
           for(int i=0; i<board.size(); i++){//Horizantal Check
            if(board[row][i]==digit){
                return false;
            }
           }
           for(int j=0; j<board.size(); j++){//Vertical Check
            if(board[j][col]== digit){
                return false;
            }
           }    //Grid Check
           int srow=(row/3)*3;
           int scol=(col/3)*3;
           for(int i=srow; i<=srow+2; i++){
            for(int j=scol; j<=scol+2; j++){
                if(board[i][j] == digit){
                    return false;
                }
            }
           }
           return true;
    }
    bool helper(vector<vector<char>>&board,int row,int col){
         if(row==board.size()){//Base Case
            return true;
         }
        int nextrow=row,nextcol=col+1;
        if(nextcol == board.size()){
            nextrow=row+1;
            nextcol=0;
        }
        if(board[row][col] !='.'){
            return helper(board,nextrow,nextcol);
        }
        for(char digit='1'; digit<='9'; digit++){
            if(isSafe(board,row,col,digit)){
                board[row][col]=digit;
                if(helper(board,nextrow,nextcol)){
                    return true;
                }
                board[row][col]='.';
            }
        }
        return false;
    }
   public:
   void sudokusolver(vector<vector<char>>&board){
        int row=0,col=0;
         helper(board,row,col);
   }
};
int main(){
    solution sol;
    vector<vector<char>>nums={
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
    sol.sudokusolver(nums);
    for(auto it : nums){
        for(auto i : it){
         cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}