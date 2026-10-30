#include<iostream>
using namespace std;
#include<bits/stdc++.h>
//Rat in a Maze
/*
Input: maze[][] = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}}
Output: ["DDRDRR", "DRDDRR"]
Explanation: There are two valid paths from the source cell (0, 0) to the destination cell (3, 3).

Input: maze[][] = [[1, 0], [1, 0]]
Output: []
Explanation: No path exists as the destination cell (1, 1) is blocked.
*/
//Approach-1/Brute Force
class solution{
    private:
    void helper(vector<vector<int>>&mat,int row,int col,string path,vector<string>&ans,vector<vector<bool>>&visit){
         int n=mat.size();
         if(row < 0 ||col<0 || row >= n || col >= n || mat[row][col] == 0 || visit[row][col] == true){//Base Case
            return;
         }
         if(row == n-1 &&col==n-1){//Base Case
            ans.push_back(path);
            return;
         }
        visit[row][col]=true;
        helper(mat,row+1,col,path + "D", ans,visit);//Down Recursion Call
        helper(mat,row-1,col,path + "U", ans,visit);//Up Recursion Call
        helper(mat,row,col-1,path + "L", ans,visit);//Down Recursion Call
        helper(mat,row,col+1,path + "R", ans,visit);//Down Recursion Call
        visit[row][col]=false;
    }
    public:
    vector<string>ratmaze(vector<vector<int>>&mat){
        int n=mat.size();
        vector<string>ans;
        string path="";
        if(n<2) return ans;
        vector<vector<bool>>visit(n,vector<bool>(n,false));
        int row=0,col=0;
        helper(mat,row,col,path,ans,visit);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
//Approach-2/Optimized
class solution{
    private:
    void helper(vector<vector<int>>&mat,int row,int col,string path,vector<string>&ans){
        int n=mat.size();
        if(row < 0 || col < 0 || row >= n ||col >= n ||mat[row][col] == -1 || mat[row][col] == 0){//Base Case
            return;
        }
        if(row == n-1 && col == n-1){//Base Case
            ans.push_back(path);
            return;
        }
        mat[row][col]=-1;
        helper(mat,row+1,col,path+"D",ans);//Down Recursion Call
        helper(mat,row-1,col,path+"U",ans);//Up Recursion Call
        helper(mat,row,col-1,path+"L",ans);//Left Recursion Call
        helper(mat,row,col+1,path+"R",ans);//Right Recursion Call
        mat[row][col]=1;
    }
    public:
    vector<string>ratmaze(vector<vector<int>>& mat){
       int n=mat.size();
       vector<string>ans;
       string path="";
       if(n< 2) return ans;//Edge Case
       int row=0,col=0;
       helper(mat,row,col,path,ans);
       sort(ans.begin(),ans.end());
       return ans;
    }
};
int main(){
    solution sol;
    vector<vector<int>>mat={{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};
    vector<string>ans=sol.ratmaze(mat);
    for(auto ch : ans){
        cout<<ch<<" ";
    }
    return 0;
}
