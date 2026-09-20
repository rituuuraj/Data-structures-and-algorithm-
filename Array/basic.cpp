// find tha First largest number 
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int find(vector<int>&nums){
    int n=nums.size();
    int ans=INT_MIN;
    for(int i=0; i<n; i++){
        if(nums[i] > ans){
            ans=nums[i];
        }
    }
    return ans;
}
int main(){
    vector<int>nums={1,4,5,6,2,3,4};
    int ans=find(nums);
    cout<<"ans="<<ans<<endl;


    return 0;
}