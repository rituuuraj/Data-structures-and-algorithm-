#include<iostream>
using namespace std;
#include<bits/stdc++.h>
/*
Generate Binary Strings Without Consecutive 1s
Given an integer n, return all binary strings of length n that do not contain consecutive 1s.
Return the result in lexicographically increasing order.
A binary string is a string consisting only of characters '0' and '1'.

Example 1:                                                                   Example 2:
Input: n = 3                                                                 Input: n = 2
Output: ["000", "001", "010", "100", "101"]                                  Output: ["00", "01", "10"]
Explanation: All strings are of length 3 and do not contain consecutive 1s.
*/
class solution{
    private:
    void generate(int n,string &curr,vector<string>&ans){
        if(curr.length() == n){//Base Case
            ans.push_back(curr);
            return;
        }
        //Always place 0
        curr.push_back('0');
        generate(n,curr,ans);//Recursion Call
        curr.pop_back();
        //Place 1 only if previous char is not 1
        if(curr.empty() || curr.back() != '1'){
           curr.push_back('1');
           generate(n,curr,ans);//Recursion Call
           curr.pop_back();
        }
    }

    public:
    vector<string>generatebinarynumber(int n){
       vector<string>ans;
       string curr="";//pass Empty String
       generate(n,curr,ans);//Function Call
       return ans;
    }
};
int main(){
    solution sol;
    int n=3;
    vector<string>ans=sol.generatebinarynumber(n);
    for(auto ch : ans){
        cout<<ch<<" ";
    }
    return 0;
}