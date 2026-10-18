#include<iostream>
using namespace std;
#include<bits/stdc++.h>
//Factorial of a given number
class solution{
    public:
    int factorial(int n){
        if(n<1){//base case
            return 1;
        }
        return n*factorial(n-1);//Recursion Call
    }
};
int main(){
    solution sol;
    int n=5;
    cout<<sol.factorial(n)<<endl;
   return 0;
}