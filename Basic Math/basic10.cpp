#include<iostream>
using namespace std;
#include<bits/stdc++.h>
/*
Count of Prime Numbers till N

You are given an integer n. You need to find out the number of prime numbers in the range [1, n] (inclusive).
 Return the number of prime numbers in the range.
A prime number is a number which has no divisors except, 1 and itself.

Example 1:
Input: n = 6
Output: 3
Explanation: Prime numbers in the range [1, 6] are 2, 3, 5.

Example 2:
Input: n = 10
Output: 4
Explanation: Prime numbers in the range [1, 10] are 2, 3, 5, 7.
*/
 bool primecheck(int x){
        if(x<2) return false;
        for(int i=2; i*i<=x; i++){
            if(x%i==0){
                return false;
            }
        }
        return true;
    }
 int primeUptoN(int n) {
       int cnt=0;
       for(int i=2; i<=n; i++){
        if(primecheck(i)){
            cnt++;
        }
       }
       return cnt;
    }
int main(){
    int n=6;
    cout<<primeUptoN(n)<<endl;
    return 0;
}