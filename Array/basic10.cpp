#include<iostream>
using namespace std;
#include<bits/stdc++.h>
/*
Third Largest
Given an array, arr[] of positive integers. Find the third largest element in it. Return -1 if the third largest element is not found.
Examples:                                                                 
Input: arr[] = [2, 4, 1, 3, 5]         Input: arr[] = [10, 2]     Input: arr[] = [5, 5, 5]
Output: 3                              Output: -1                 Output: 5.
*/
//Approach-1/Brute Force
class solution{
    public:
    int thirdlargetnum(vector<int>&nums){//This Approach Work only distinct Array Element
        int n=nums.size();
        if(n< 3) return -1;//Edge Case
        int firstlargest=INT_MIN;
        int secondlargest=INT_MIN;
        int thirdlargest=INT_MIN;
        for(int i=0; i<n; i++){//Find First Largest
            if(nums[i] > firstlargest){
                firstlargest=nums[i];
            }
        }
        for(int i=0; i<n; i++){//Find Second Largest
            if(nums[i] > secondlargest && nums[i] < firstlargest){
                secondlargest=nums[i];
            }
        }
        for(int i=0; i<n; i++){//FInd Third Largest
            if(nums[i] > thirdlargest && nums[i] <secondlargest){
                thirdlargest=nums[i];
            }
        }
        return (thirdlargest == INT_MIN) ? -1 : thirdlargest;
    }
};
class solution{
    public:
    int thirdLargest(vector<int> &nums) {
    int n = nums.size();
    if (n < 3) return -1;
    int firstlargest = INT_MIN;
    int secondlargest = INT_MIN;
    int thirdlargest = INT_MIN;
    //1st largest
    for (int i = 0; i < n; i++) {
        if (nums[i] > firstlargest) {
            firstlargest = nums[i];
        }
    }
    //count firstlargest
    int cnt1 = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == firstlargest)
            cnt1++;
    }
    if (cnt1 >= 3) return firstlargest;
    //2nd largest
    for (int i = 0; i < n; i++) {
        if (nums[i] > secondlargest && nums[i] < firstlargest) {
            secondlargest = nums[i];
        }
    }
    if (cnt1 == 2) return secondlargest;
    //count secondlargest
    int cnt2 = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == secondlargest)
            cnt2++;
    }
    if (cnt1 + cnt2 >= 3) return secondlargest;
    //3rd largest
    for (int i = 0; i < n; i++) {
        if (nums[i] > thirdlargest && nums[i] < secondlargest) {
            thirdlargest = nums[i];
        }
    }
    return thirdlargest;
}
};
//Approach-2/Better
class Solution {
	public:
	int thirdLargest(vector<int> &nums) {
		sort(nums.begin(), nums.end());//Sort array
		int n = nums.size();
		if (n<3)return - 1;//Edge Case
		return nums[n - 3];
	}
};
//Approach-3/Optimized
class solution{
    public:
    int thirdLargest(vector<int>&nums){
        int n=nums.size();
        if(n<3) return -1;
        int firstlargest=INT_MIN;
        int secondlargest=INT_MIN;
        int thirdlargest=INT_MIN;
        for(int i=0; i<n; i++){
            if(nums[i] > firstlargest){
               thirdlargest=secondlargest;
               secondlargest=firstlargest;
               firstlargest=nums[i];
            }else if(nums[i] > secondlargest && nums[i] != firstlargest){
                thirdlargest=secondlargest;
                secondlargest=nums[i];
            }else if(nums[i] >thirdlargest && nums[i] != secondlargest && nums[i] != firstlargest){
                  thirdlargest=nums[i];
            }
        }
        return (thirdlargest==INT_MIN) ? -1 : thirdlargest;
    }
};
int main(){
    solution sol;
    vector<int>nums={5,5,5,5,5};
    cout<<sol.thirdLargest(nums)<<endl;
    return 0;
}