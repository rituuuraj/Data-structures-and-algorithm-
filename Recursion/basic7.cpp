#include<iostream>
using namespace std;
#include<bits/stdc++.h>
//Fibonacci Number
//solve this question on leetcode-509
class solution{
public:
int fibonici(int n){
    if(n<=1){//base case
      return n;
    }
    return fibonici(n-1)+fibonici(n-2);//Recursion Call
}
};
int main(){
    solution sol;
    int n=5;
     cout<<sol.fibonici(n)<<endl;
    return 0;
}