#include<iostream>
using namespace std;
#include<bits/stdc++.h>
//print name n time
//Approach-1
class solution{
    private:
    void print(int i,int n){
        if(i>=n){//base case;
            return;
        }
        cout<<"Ritu Raj"<<endl;
        print(i+1,n);//Recursion  call
    }
    public:
    void printname(int n){
        print(1,n);//function call
    }
};
//Approach-2
class solution{
    public:
    void printname(int n){
        if(n<0){
            return;
        }
        cout<<"Ritu Raj"<<endl;
        printname(n-1);
    }
};
int main(){
    solution sol;
    int n=5;
    sol.printname(n);
    return 0;
}
