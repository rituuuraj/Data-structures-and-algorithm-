#include<iostream>
using namespace std;
#include<bits/stdc++.h>
//Reverse an Array
//Solve this on leetcode-344
class solution{
    private:
    void reversearray(vector<int>&nums,int l,int r){
        if(l>r) return;
        swap(nums[l],nums[r]);
        reversearray(nums,l+1,r-1);
    }
   public:
   void reverse(vector<int>&num){
    reversearray(num,0,num.size()-1);
   }
};
int main(){
    solution sol;
    vector<int>nums={1,2,3,4,5};
    sol.reverse(nums);
    for(auto it : nums){
        cout<<it<<" ";
    }
    return 0;
}