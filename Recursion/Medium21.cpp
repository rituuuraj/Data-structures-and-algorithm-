#include<iostream>
using namespace std;
#include<bits/stdc++.h>
//Solve on Leetcode-131
//Palindrome Partitioning
class solution{
    private:
    bool ispalindrome(string str){//Check Palindrome or not
        string s1=str;
        reverse(s1.begin(),s1.end());
        return str==s1;
    }
    void getallparts(string s,vector<string>partitions,vector<vector<string>>&ans){  
        if(s.length() == 0){//Base Case
          ans.push_back(partitions);
          return;
        }
        for(int i=0; i<s.length(); i++){//Make Partitions Substring to Check Palindrome
            string parts=s.substr(0,i+1);//Possible Make Partition n-1 
            if(ispalindrome(parts)){
                partitions.push_back(parts);//Include
                getallparts(s.substr(i+1),partitions,ans);//Recursion Call
                partitions.pop_back();//Exclude
            }
        }
    }
    public:
    vector<vector<string>>partition(string s){
        vector<vector<string>>ans;//Store All Substring
        vector<string>partitions;
        getallparts(s,partitions,ans);//Function Call
        return ans;
    }
};
int main(){
    solution sol;
    string s="aab";
    vector<vector<string>>ans=sol.partition(s);
    for(auto it : ans){
        for(auto i : it){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}