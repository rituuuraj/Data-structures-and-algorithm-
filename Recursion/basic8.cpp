#include<iostream>
using namespace std;
#include<bits/stdc++.h>
/*
Sum of Array Elements II
Given an array nums, find the sum of elements of array using recursion.

Example 1:                                                           Example 2:
Input : nums = [1, 2, 3]                                             Input : nums = [5, 8, 1]
Output : 6                                                           Output : 14
Explanation : The sum of elements of array is 1 + 2 + 3 => 6.        Explanation : The sum of elements of array is 5 + 8 + 1 => 14.
*/
class solution{
private:
    int sumarray(vector<int>&nums,int index){
        if(index == nums.size()){//Base case
             return 0;
        }
        return nums[index]+sumarray(nums,index+1);//Recursion Call
    }
public:
  int sum(vector<int>&nums){
        return sumarray(nums,0);//Function Call
  }
};
int main(){
    solution sol;
    vector<int>num={1,2,3,4,5};
    cout<<sol.sum(num)<<endl;
    return 0;
}