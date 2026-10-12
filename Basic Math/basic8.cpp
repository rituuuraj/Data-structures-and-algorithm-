#include<iostream>
using namespace std;
#include<bits/stdc++.h>
/*
You are given an integer n. You need to check whether it is an armstrong number or not. 
Return true if it is an armstrong number, otherwise return false.
An armstrong number is a number which is equal to the sum of the digits of the number, 
raised to the power of the number of digits.

Example 1:                                          Example 2: 
Input: n = 153                                      Input: n = 12
Output: true                                        Output: false
Explanation: Number of digits : 3.                  Explanation: Number of digits : 2.
13 + 53 + 33 = 1 + 125 + 27 = 153.                  12 + 22 = 1 + 4 = 5.
Therefore, it is an Armstrong number.               Therefore, it is not an Armstrong number

Constraints:
0 <= n <= 109
*/
int power(int num,int cube){//Find number ka cube
  int result=1;
  for(int i=0; i<cube; i++){
    result*=num;
  }
  return result;
}

bool armstrong(int n){
    //step 1=number count
  int cnt=0;
  int temp=n;
  while(temp >0){
    cnt++;
    temp/=10;
  }
    // Step 2: Calculate sum of digits^cnt
  temp=n;
  int sum=0;
  while(temp >0){
    int lastdigit=temp%10;
    sum+=power(lastdigit,cnt); //digits^cnt
    temp/=10;
  }
  return sum == n ? true : false;
}
int main(){
  int n=153;
  cout<<armstrong(n)<<endl;
  return 0;
}
