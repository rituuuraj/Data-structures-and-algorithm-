#include<iostream>
using namespace std;
#include<bits/stdc++.h>
//Sum of first digts
//Approach-1
class solution{
   public:
   int sum(int n){
    if(n<0){//base case
        return 0;
    }
    return n+sum(n-1);//Recursion call
   }
};
//Approach-2
class solution{
   public:
    void printsum(int n,int sum){
        if(n<0){//Base Case
            cout<<sum;
            return;
        }
        printsum(n-1,sum+n);//Recursion Call
    }
};
int main(){
    solution sol;
    int n=5;
    cout<<sol.sum(n);

    solution sol;
    int n=5,sum=0;
    sol.printsum(n,sum);
    return 0;
}