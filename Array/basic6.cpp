#include<iostream>
using namespace std;
#include<bits/stdc++.h>
/*
Check if the Array is Sorted I
Example 1:                           Example 2:
arr = [1,2,3,4,5]                    arr = [5,4,6,7,8]
Output : True                         Output: False
*/
class solution{
public:
bool checksorted(vector<int>&nums){
  int n=nums.size();
  for(int i=0; i<n-1; i++){
    if(nums[i] > nums[i+1]){
      return false;
    }
  }
  return true;
}
};
int main(){
    solution sol;
  vector<int>nums={5,4,6,7,8};
  cout<<sol.checksorted(nums)<<endl;

  return 0;
}