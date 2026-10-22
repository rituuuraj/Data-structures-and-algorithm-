#include<iostream>
using namespace std;
#include<bits/stdc++.h>
/*
Reverse an array
arr = [1,2,3,4,5]           arr = [1,2,1,1,5,1]
Output: [5,4,3,2,1]         Output: [1,5,1,1,2,1]
*/
//Approach-1
class solution{
  public:
  void reverse(vector<int>&nums){
    int n=nums.size();
    int low=0, high=n-1;
    while(low < high){
      swap(nums[low++],nums[high--]);
    }
  }
};
//Approach-2 Without Using Swap Function
class solution{
  public:
  void reverse(vector<int>&nums){
    int n=nums.size();
    int low=0, high=n-1;
    while(low < high){
       int temp=nums[low];
       nums[low]=nums[high];
       nums[high]=temp;
       low++; high--;
    }
  }
};
int main(){
  solution sol;
  vector<int>nums={1,2,3,4,5};
  sol.reverse(nums);
  for(auto i : nums){
    cout<<i<<" ";
  }
  return 0;
}