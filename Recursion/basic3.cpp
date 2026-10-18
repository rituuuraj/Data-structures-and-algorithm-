#include<iostream>
using namespace std;
#include<bits/stdc++.h>
//Print Nunber n to 1
class solution{
    public:
    void printnum(int n){
        if(n<1)return;//base case
        
        cout<<n<<" ";
        printnum(n-1);//Recursion call
    }
};

int main(){
solution sol;
int n=5;
sol.printnum(n);
   
    return 0;
}