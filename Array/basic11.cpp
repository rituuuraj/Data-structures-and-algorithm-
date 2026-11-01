#include<iostream>
using namespace std;
#include<bits/stdc++.h>
//Check Array Sorted or Not
//Approach-1/Brute Force
class solution{
    public:
    bool checkarray(vector<int>&nums){
        vector<int>temp=nums;
        sort(temp.begin(),temp.end());
        return nums==temp;
    }
};
//Approach-2/Optimized
class solution{
    public:
    bool checkarray(vector<int>&nums){
        int n=nums.size();
        for(int i=1; i<n; i++){
            if(nums[i] < nums[i-1]){//Compare 
                return false;
            }
        }
        return true;
    }
};
int main(){
    solution sol;
    vector<int>nums={2,1,5,3,6,4};
    cout<<sol.checkarray(nums)<<endl;
   return 0;
}
