#include<iostream>
using namespace std;
#include<bits/stdc++.h>
/*
       Generate Parentheses
Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.
Example 1:
Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]

Example 2:
Input: n = 1
Output: ["()"]
*/
//Solve On Leetcode-22
//Approach-1 using backtracking
bool isvalid(string str){//check Valid Parentheses
    int cnt=0;
    for(auto ch : str){
        if(ch == '('){
            cnt++;
        }else{
            cnt--;
            if(cnt <0) return false;
        }
    }
    return cnt==0;
}
void generateparentheses(string curr,int n,vector<string>&res){// Generate Parentheses
    if(curr.length() == 2*n){//Base case
        if(isvalid(curr)){
            res.push_back(curr);
        }
        return;
    }

    curr.push_back('(');
    generateparentheses(curr,n,res);//Recursion Call
    curr.pop_back();

    curr.push_back(')');
    generateparentheses(curr,n,res);//Recursion Call
    curr.pop_back();
}
vector<string>generate(int n){//T/C=O(2power2n*2n)/S/C=O(2*n)
    string curr="";            
    vector<string>res;
    generateparentheses(curr,n,res);
    return res;
}

//Better Approach-2
void generateparentheses(string curr,int n,int opnebracket,int closebracket,vector<string>&res){
    if(curr.length()==2*n){//base case
        res.push_back(curr);
        return;
    }
    if(opnebracket <n){
        generateparentheses(curr+'(',n,opnebracket+1,closebracket,res);//Recursion Call
    }
    if(closebracket<opnebracket){
        generateparentheses(curr+')',n,opnebracket,closebracket+1,res);//Recursion Call
    }
}
vector<string>generate(int n){//T/C=O(2power2n)/S/C=O(2*n)
    string curr="";
    vector<string>res;
    generateparentheses(curr,n,0,0,res);
    return res;
}



int main(){
    int n=3;
    vector<string>ans=generate(n);
  for(auto ch : ans){
    cout<<ch<<" ";
  }
    return 0;
}