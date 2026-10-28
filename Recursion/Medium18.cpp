#include<iostream>
using namespace std;
#include<bits/stdc++.h>
//Combination Sum-II
//solve on Leetcode-40
class solution{
    private:
    void generate(vector<int>&nums,int target,int indx,vector<int>&sub,vector<vector<int>>&ans){
        if(target == 0){//Base Case
            ans.push_back(sub);
            return;
        }
        if(indx == nums.size() || target < 0){//Base Case
            return;
        }
        sub.push_back(nums[indx]);//Include
        generate(nums,target-nums[indx],indx+1,sub,ans);//Recursion Call
        sub.pop_back();//Exclude
        int i=indx+1;
        while(i < nums.size() && nums[i] == nums[i-1]){//skip Dublicate number
            i++;
        }
        generate(nums,target,i,sub,ans);//Backtracing Call
    }
    public:
    vector<vector<int>>combinationsum(vector<int>&nums,int target){
        sort(nums.begin(),nums.end());//Sort Array
        vector<int>sub;//Make Combination Sum
        vector<vector<int>>ans;//Store Combination Sum
        int indx=0;
        generate(nums,target,indx,sub,ans);//Function Call
        return ans;
    }
};
int main(){
    solution sol;
    vector<int>nums={2,5,2,1,2};
    vector<vector<int>>ans=sol.combinationsum(nums,5);
    for(auto it : ans){
        for(auto i: it){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}