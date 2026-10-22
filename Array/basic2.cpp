#include<iostream>
using namespace std;
#include<bits/stdc++.h>
//Concatenation of Array
//Solve on Leetcode-1929
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(nums[i]);
        }
        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(nums[i]);
        }
        return ans;
    }
};
int main(){
    Solution sol;
    vector<int>nums={1,2,1};
    return 0;
}