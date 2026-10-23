#include<iostream>
using namespace std;
#include<bits/stdc++.h>
/*
Linear Search
Example 1:                                                     Example 2:
Input: nums = [2, 3, 4, 5, 3], target = 3                      Input: nums = [2, -4, 4, 0, 10], target = 6
Output: 1                                                      Output: -1
Explanation:The first occurence of 3 in nums is at index 1     Explanation:The value 6 does not occur in the array, hence output is -1
*/
class solution{
   public:
   int linearsearch(vector<int>&nums,int target){
       int n=nums.size();
       for(int i=0; i<n; i++){
        if(nums[i] == target){
            return i;
        }
       }
       return -1;
   }
};
int main(){
    solution sol;
    vector<int>nums={2,3,4,5,3};
    int target=3;
    cout<<sol.linearsearch(nums,target);
    return 0;
}