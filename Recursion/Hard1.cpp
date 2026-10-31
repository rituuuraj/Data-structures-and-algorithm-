#include<iostream>
using namespace std;
#include<bits/stdc++.h>
//Solve on Leetcode-51
//N-Queens
class solution{
    private:
    bool isSafe(vector<string>&board,int row,int col,int n){
    //Horizontal Check
    for(int i=0; i<n; i++){
        if(board[row][i] == 'Q'){
            return false;
        }
    }
    //Vertical Check
    for(int j=0; j<n; j++){
        if(board[j][col] == 'Q'){
            return false;
        }
    }
    //left Diagonal Check
    for(int i=row,j=col; i>=0&&j>=0; i--,j--){
        if(board[i][j] == 'Q'){
            return false;
        }
    }
    //Right Diagonal check
    for(int i=row,j=col; i>=0&&j<n; i--,j++){
        if(board[i][j] == 'Q'){
           return false;
        } 
    }
      return true;
}
    public:
    void nqueens(int n,int row,vector<string>&board,vector<vector<string>>&ans){
       if(row==n){//Base Case
        ans.push_back(board);
        return;
       }
       for(int col=0; col<n; col++){
        if(isSafe(board,row,col,n)){
            board[row][col]='Q';
            nqueens(n,row+1,board,ans);//Recursion Call
            board[row][col]='.';
        }
    }
}
vector<vector<string>>solvenqueens(int n){
    vector<vector<string>>ans;
    vector<string>board(n,string(n,'.'));
    int row=0;
    nqueens(n,row,board,ans);
    return ans;

}
};
int main(){
    solution sol;
    int n=4;
    vector<vector<string>>ans=sol.solvenqueens(n);
    for(auto it : ans){
        for(auto i : it){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}