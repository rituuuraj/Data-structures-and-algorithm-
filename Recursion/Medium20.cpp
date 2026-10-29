#include<iostream>
using namespace std;
#include<bits/stdc++.h>
//Letter Combinations of a Phone Number
//Solve on Leetcode-17
class solution{
private:
 void generate(string digits,string curr,int indx,vector<string>&ans,string mapping[]){
    if(indx>=digits.length()){//Base Case
        ans.push_back(curr);
        return;
    }
    int number=digits[indx]-'0';
    string value=mapping[number];
    for(int i=0; i<value.length(); i++){
        curr.push_back(value[i]);//Include
        generate(digits,curr,indx+1,ans,mapping);//Recursion Call
        curr.pop_back();//Exclude
    }
}
public:
  vector<string>lettercombination(string digits){
    vector<string>ans;//Store All Combination letter
    string curr="";//Make combination
    int indx=0;
    if(digits.length() == 0){//Edge Case
        return ans;
    }
    string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    generate(digits,curr,indx,ans,mapping);//function Call
    return ans;

}
};
int main(){
    solution sol;
    string digits="23";
    vector<string>ans=sol.lettercombination(digits);
    for(auto it : ans){
        cout<<it<<" ";
    }
    return 0;
}
    
