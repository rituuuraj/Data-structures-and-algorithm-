#include<iostream>
using namespace std;
#include<bits/stdc++.h>
/*
Reverse a number
Example->
(1)-nums=25       (2)-nums=123
O/p=52             O/p=321
*/
int reversenum(int n){
    int reverse=0;
    while(n>0){
        int lastdigit=n%10;
        reverse=reverse*10+lastdigit;
        n/=10;
    }
    return reverse;
}
int main(){
    int n=123;
    cout<<reversenum(n)<<endl;
    return 0;
}