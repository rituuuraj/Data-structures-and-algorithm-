/*
Factorial of a given number
Examole->
(1)-nums=5   (2)nums=3   (3)nums=0
O/P=120       O/p=6;      O/P=1
*/
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int Factorial(int n){
  int ans=1;
  for(int i=1; i<=n; i++){
      ans*=i;
  }
  return ans==0 ? 1 : ans;

}
int main(){
  int n=4;
  cout<<Factorial(n)<<endl;
  return 0;
}
