#include<iostream>
using namespace std;
#include<bits/stdc++.h>
/* 
Sum of Array Elements
Input: n=5, arr = [1,2,3,4,5]                              Input: n=6, arr = [1,2,1,1,5,1] 
Output: 15                                                 Output: 11
Explanation: Sum of all the elements is 1+2+3+4+5 = 15     Explanation: Sum of all the elements is 1+2+1+1+5+1 = 11
*/
class solution{
  public:
  int arraysum(vector<int>&arr){
    int sum=0;
    for(int i=0; i<arr.size(); i++){
        sum+=arr[i];
    }
    return sum;
  }
};
int main(){
    solution sol;
    vector<int>arr={1,2,3,4,5};
    return 0;
}
