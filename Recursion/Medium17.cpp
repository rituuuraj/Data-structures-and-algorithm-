#include<iostream>
using namespace std;
#include<bits/stdc++.h>
//Combination Sum
//Solve on leetcode-39
//Approach-1/Brute Force
class solution{
    private:
    set<vector<int>>s;//Make Unique Subsets
    void generate(vector<int>&nums,int target,int indx,vector<int>&sub,vector<vector<int>>&ans){
              if(target == 0){//Base Case
                if(s.find(sub) == s.end()){//Check subsets unique or not
                    ans.push_back(sub);
                    s.insert(sub);
                }
                return;
              }

              if(indx == nums.size() || target < 0){//Base Case
                return;
              }

              sub.push_back(nums[indx]);//Take
              generate(nums,target-nums[indx],indx+1,sub,ans);//Recursion Call
              generate(nums,target-nums[indx],indx,sub,ans);//Add number Multiple Times
              sub.pop_back();//Not take
              generate(nums,target,indx+1,sub,ans);//Backtracking Call

    }
    public:
    vector<vector<int>>combinationsum(vector<int>&nums,int target){
        
        vector<int>sub;//Make Subsets combination sum == target
        vector<vector<int>>ans;//Store All Subsets combination sum == target
        int indx=0;
        generate(nums,target,indx,sub,ans);//Function Call
        return ans;
    }
};
//Approach-2//Optimized
class solution{
    private:
    void generate(vector<int>&nums,int target,int indx,vector<int>&sub,vector<vector<int>>&ans){
        if(indx == nums.size()){//Base Case
            if(target == 0){//Base Case
                ans.push_back(sub);
            }
            return;
        }

        if(nums[indx] <= target){
            sub.push_back(nums[indx]);//Take
            generate(nums,target-nums[indx],indx,sub,ans);//Add number Multiple Times/Recursion Call
            sub.pop_back();//Not Take
        }
        generate(nums,target,indx+1,sub,ans);//Backtracking call
    }
    public:
    vector<vector<int>>combinationsum(vector<int>&nums,int target){
        vector<int>sub;
        vector<vector<int>>ans;
        int indx=0;
        generate(nums,target,indx,sub,ans);//Recursion Call
        return ans;
    }
};
int main(){
    solution sol;
    vector<int>nums={2,3,6,7};
    int target=7;
    vector<vector<int>>ans=sol.combinationsum(nums,target);
    for(auto it : ans){
        cout<<"{";
        for(auto i : it){
            cout<<i;
        }
        cout<<"}"<<endl;
    }
    return 0;
}