#include<iostream>
using namespace std;
#include<bits/stdc++.h>
/*
         Divisors of a Number
You are given an integer n. You need to find all the divisors of n. Return all the divisors of n as an array or list in a sorted order.
A number which completely divides another number is called it's divisor.

Example 1:                                            Example 2:
Input: n = 6                                          Input: n = 8
Output = [1, 2, 3, 6]                                 Output: [1, 2, 4, 8]
Explanation: The divisors of 6 are 1, 2, 3, 6.        Explanation: The divisors of 8 are 1, 2, 4, 8.
*/
class Solution {
public:
    vector<int> divisors(int n) {
        vector<int>num;
        for(int i=1; i<=n; i++){
            if(n%i==0){
                num.push_back(i);
            }
        }
      return num;
    }
};
int main(){                    //T/C=O(n)
    Solution sol;             //S/C=O(n)
    int n=6;
    vector<int>ans=sol.divisors(n);
    for(auto it : ans){
        cout<<it<<" ";
    }
    return 0;
}