#include<iostream>
using namespace std;
#include<bits/stdc++.h>
/*
Count of Prime Numbers till N

You are given an integer n. You need to find out the number of prime numbers in the range [1, n] (inclusive).
 Return the number of prime numbers in the range.
A prime number is a number which has no divisors except, 1 and itself.

Example 1:                                                               Example 2:
Input: n = 6                                                             Input: n = 10
Output: 3                                                                Output: 4
Explanation: Prime numbers in the range [1, 6] are 2, 3, 5.              Explanation: Prime numbers in the range [1, 10] are 2, 3, 5, 7.
*/
//Solve This Problem on Leetcode-204
//Method-1 Solve This Problem
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
       for(int i=2; i<n; i++){
        if(primecheck(i)){
            cnt++;
        }
       }
       return cnt;
    }
    //Methode-2 by Using Sieve of Eratosthenes algorithms
    int primecount(int n){
        if(n<2) return 0;
        vector<bool>isprime(n,true);
        isprime[0]=false; isprime[1]=false;  // 0 and 1 is prime numsber marks False;
        for(int i=2; i*i<n; i++){
            if(isprime[i]){
                for(int j=i*i; j<n; j+=i){
                    isprime[j]=false;
                }
            }
        }
        int cnt=0;
        for(int i=2; i<n; i++){
            if(isprime[i]){
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