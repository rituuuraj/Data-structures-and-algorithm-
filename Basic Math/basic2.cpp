#include<iostream>
using namespace std;
#include<bits/stdc++.h>

/*Count number of odd digits in a number
Example->
(1)-nums=5   (2)-nums=25
O/p=1           O/p=1
*/
int countoddnum(int n){
    int cnt=0;
    while(n>0){
        int lastdigit=n%10;
        if(n%2 != 0){
            cnt++;
        }
        n/=10;
    }
    return cnt;
}
int main(){
    int n=25;
    int n=5;
    cout<<countoddnum(n)<<endl;
    return 0;
}
