// find tha First largest number 
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
//Approach-1
class solution{
public:
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
};
//Approach-2
class solution{
    public:
    int find(vector<int>&nums){
        vector<int>sorted=nums;
        sort(sorted.begin(),sorted.end());//Sortarray
        return sorted.back();//
    }
};

//Approach-3
class solution{
   public:
   int find(vector<int>&nums){
    int n=nums.size();
    int maxelement=nums[0];
    for(int i=0; i<n; i++){
        if(nums[i] > maxelement){
            maxelement=nums[i];
        }
    }
    return maxelement;
   }
};
int main(){
    solution sol;
    vector<int>nums={1,4,5,6,2,3,4};
    int ans=sol.find(nums);
    cout<<"ans="<<ans<<endl;


    return 0;
}