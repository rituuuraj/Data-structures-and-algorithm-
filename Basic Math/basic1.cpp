#include<iostream>
using namespace std;
#include<bits/stdc++.h>
 /*Count all Digits of a Number
You are given an integer n. You need to return the number of digits in the number.
The number will have no leading zeroes, except when the number is 0 itself.
 Example->
 (1)-num=4  (2) nums=14
 o/p=1           o/p=2;
*/
int countnumber(int n){
    //Edge Case
    if(n==0) return 1;
    if(n<0){
        n=-n; //covert Negative into Positve Value
    }

    int cnt=0;
    while(n>0){
       int lastdigit=n%10;
       cnt++;
       n/=10;
    }
    return cnt;
}
int main(){
    int n=14;
    int n=2;
    cout<<countnumber(n)<<endl;

    return 0;
}
