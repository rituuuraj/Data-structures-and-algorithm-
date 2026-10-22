#include<iostream>
using namespace std;
#include<bits/stdc++.h>
/*
Count of odd numbers in Array
Example 1:                                        Example 2:
Input: n=5, array = [1,2,3,4,5]                   Input: n=6, array = [1,2,1,1,5,1]
Output: 3                                         Output: 5
Explanation: The three odd elements are (1,3,5).  Explanation: The five odd elements are one 5 and four 1's.
*/
class solution{
public:
int coutoddarray(vector<int>&nums){
   int cnt=0;
   for(int i=0; i<nums.size(); i++){
    if(nums[i] %2 != 0){
        cnt++;
    }
   }
   return cnt;
}
};
int main(){
    solution sol;
    vector<int>nums={1,2,3,4,5};
    cout<<sol.coutoddarray(nums);
    return 0;
}