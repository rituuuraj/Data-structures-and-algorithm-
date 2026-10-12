#include<iostream>
using namespace std;
#include<bits/stdc++.h>
/*
Check for Prime Number
You are given an integer n. You need to check if the number is prime or not. 
Return true if it is a prime number, otherwise return false.
A prime number is a number which has no divisors except 1 and itself.

Example 1:                                                                       Example 2:    
Input: n = 5                                                                     Input: n = 8
Output: true                                                                     Output: false
Explanation:The only divisors of 5 are 1 and 5 , So the number 5 is prime.       Explanation: The Divisors of 8 are 1,2,4,8, thus it is not a prime number.

Constraints:
1 <= n <= 5000
*/
 bool isPrime(int n) {
        
        if(n<=1) return false;
        for(int i=2; i<n; i++){
            if(n%i == 0){
                return false;
                
            }
        }
        return true;
    }
 int main(){
    int n=5;
    cout<<isPrime(n)<<endl;
     return 0;
    }