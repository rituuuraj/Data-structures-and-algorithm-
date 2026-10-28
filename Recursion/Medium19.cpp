#include<iostream>
using namespace std;
#include<bits/stdc++.h>
//Combination sum-III
//Solve on Leetcode-216
class solution{
private:
    void generate(int k,int n,int strt,int sum,vector<int>&sub,vector<vector<int>>&ans){
        if(sub.size()==k){//Base Case
            if(sum==n){
            ans.push_back(sub);
            }
            return;
        }
        for(int i=strt; i<=9; i++){
            sub.push_back(i);//Include
            generate(k,n,i+1,sum+i,sub,ans);//Recursion Call
            sub.pop_back();//Exclude
        }
    }
public:
    vector<vector<int>>combination(int k,int n){
        vector<int>sub;//Make combination sum
        vector<vector<int>>ans;//Store all combination Sum
        int strt=1,sum=0;
        generate(k,n,strt,sum,sub,ans);
        return ans;
    }
};
int main(){
    solution sol;
    int k=3,n=9;
    vector<vector<int>>ans=sol.combination(k,n);
    for(auto it : ans){
        for(auto i: it){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}