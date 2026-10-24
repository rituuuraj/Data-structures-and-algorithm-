#include<iostream>
using namespace std;
#include<bits/stdc++.h>
//Solve on Leetcode-90
//Subsets-II
class solution{
    private:
    void generate(vector<int>&nums,int indx,vector<int>&sub,vector<vector<int>>&ans){
            ans.push_back(sub);//add Empty subset
            for(int j=indx; j<nums.size(); j++){
                if(j > indx && nums[j] == nums[j-1]) continue;//Checking
                 
                sub.push_back(nums[j]);//Take 
                generate(nums,j+1,sub,ans);//Recursion Call
                
                sub.pop_back();//Not Take
            }
    }
    public:
    vector<vector<int>>subsets(vector<int>&nums){
        sort(nums.begin(),nums.end());//Sort Array
        vector<vector<int>>ans;//Store All Subsets
        vector<int>sub;//Make Subset
        int indx=0;
        generate(nums,indx,sub,ans);//Function Call
        return ans;
    }
};
int main(){
    solution sol;
    vector<int>nums={1,2,2};
    vector<vector<int>>ans=sol.subsets(nums);
    for(auto it : ans){
        cout<<"{";
        for(auto i : it){
            cout<<i;
        }
        cout<<"}"<<endl;
    }
    return 0;
}