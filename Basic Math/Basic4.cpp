#include<iostream>
using namespace std;
#include<bits/stdc++.h>
/*
Check Paildrome True or false
Example->
(1)-nums=121 (2)-nums=123
 O/p=True     O/p=False
*/
bool checkpaildrome(int n){
    int ans=n;
    int reverse=0;
    while(n>0){
        int lastdigit=n%10;
        reverse=reverse*10+lastdigit;
        n/=10;
    }
    return reverse==ans ? true : false;
}
int main(){
    int n=121;
    cout<<checkpaildrome(n)<<endl;
    return 0;
}
