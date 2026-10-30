#include<iostream>
using namespace std;
#include<bits/stdc++.h>
//Solve on Leetcode-79
//Word Search
class solution{
    private:
    bool helper(vector<vector<char>>&board,string &word,int row,int col,int indx){
        if(indx == word.length()){//Base Case
            return true;
        }
        if(row < 0 || col < 0 || row >= board.size() || col >= board[0].size() || board[row][col] != word[indx]){//Base Case
            return false;
        }
        char temp=board[row][col];
             board[row][col]='#';
        bool found=
             helper(board,word,row+1,col,indx+1)||//Down Recursion Call
             helper(board,word,row-1,col,indx+1)||//Up Recursion Call
             helper(board,word,row,col-1,indx+1)||//Left Recursion Call
             helper(board,word,row,col+1,indx+1);//Right Recursion Call
             board[row][col]=temp;
             return found;
    }
    public:
    bool exist(vector<vector<char>>&board,string word){
          int m=board.size();
          int n=board[0].size();
          int indx=0;
          for(int row=0; row<m; row++){
            for(int col=0; col < n; col++){
               if(helper(board,word,row,col,indx)){
                return true;
               }
            }
          }
          return false;
    }
};
int main(){
    solution sol;
    vector<vector<char>>nums={{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
    string word = "ABCCED";
    cout<<sol.exist(nums,word)<<endl;
    return 0;
}