#include<iostream>
using namespace std;
#include<bits/stdc++.h>
//Running Sum of 1d Array
//Solve on leetcode-1480
//Approach-1
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        vector<int>ans;
        for (int i = 0; i < nums.size(); i++) {
            nums[i] += sum;
            sum = nums[i];
            ans.push_back(nums[i]);
        }
        return ans;
    }
};

//Approach-2;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            nums[i] += sum;
            sum = nums[i];
        }
        return nums;
    }
};
int main(){
    Solution sol;
    vector<int>nums={1,2,3,4,5};
    return 0;
}