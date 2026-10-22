#include<iostream>
using namespace std;
#include<bits/stdc++.h>
//Generate Subsets
//Solve this on leetcode-78
class solution{
    private:
    void generatesubsets(vector<int>&nums,int indx,vector<int>&sub,vector<vector<int>>ans){
          if(indx == nums.size()){//Base Case
            ans.push_back(sub);
            return ;
          }
          sub.push_back(nums[indx]);
          generatesubsets(nums,indx+1,sub,ans);//Recursion Call 

          sub.pop_back();
          generatesubsets(nums,indx+1,sub,ans);//Backtracing Call
    }
  public:
  vector<vector<int>>subsets(vector<int>&nums){
    vector<vector<int>>ans;//Pass Empty Vector For Store  SubSets
    vector<int>sub;//Pass Empty Vector for Make Subsets
    int indx=0;//Pass For Subsets length
    generatesubsets(nums,indx,sub,ans);//Function Call
    return ans;
  }
};
int main(){
    solution sol;
    vector<int>nums={1,2,3};
    vector<vector<int>> ans = sol.subsets(nums);
    for (auto subset : ans) {
        cout << "{ ";
        for (auto x : subset) {
            cout << x << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}