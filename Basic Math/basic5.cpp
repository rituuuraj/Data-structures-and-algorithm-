/*
Return the Largest Digit in a Number
Example->
(1)-nums=25     (2)nums=98
O/P=5             O/P=9
*/
#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int findnumber(int n){
  int ans=-1;
    while(n >0){
      int lastdigit=n%10;
        ans=max(ans,lastdigit);
        n/=10;
    }
    return ans;
}
 int main(){
  int n=25;
  cout<<findnumber(n)<<endl;
  return 0;
 }

