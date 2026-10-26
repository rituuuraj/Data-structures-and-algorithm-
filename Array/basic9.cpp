#include<iostream>
using namespace std;
#include<bits/stdc++.h>
/*
Find Second largest number
Example 1:                                                             Example 2:
Input: nums = [8, 8, 7, 6, 5]                                          Input: nums = [10, 10, 10, 10, 10]
Output: 7                                                              Output: -1
Explanation:The largest value in nums is 8, the second largest is 7    Explanation:The only value in nums is 10, so there is no second largest value, thus -1 is returned
*/
//Approach-1/Brute Force
class solution{
    public:
    int secondlargestnum(vector<int>&nums){
        int n=nums.size();
         if(n<2) return -1;//Edge Case
        int firstlargest=INT_MIN;
        int secondlargest=INT_MIN;
        for(int i=0; i<n; i++){
            if(nums[i] > firstlargest){
                firstlargest=nums[i];
            }
        }

        for(int i=0; i<n; i++){
            if(nums[i] > secondlargest && nums[i] != firstlargest){
                secondlargest=nums[i];
            }
        }
        return (secondlargest == INT_MIN) ? -1 : secondlargest;
    }
};

//Approach-2/Better
class solution{
    public:
    int secondlargestnum(vector<int>&nums){
     sort(nums.begin(),nums.end());
     int n=nums.size();
     int firstlargest=nums[n-1];
     int secondlargest=INT_MIN;
     for(int i=n-2; i>=0; i--){
        if(nums[i] < firstlargest){
            secondlargest=nums[i];
            break;
        }
     }
     return (secondlargest == INT_MIN)? -1 : secondlargest;
}
};

//Approach-3/Optimized
class solution{
    public:
    int secondlargestnum(vector<int>&nums){
        int n=nums.size();
        if(n < 2) return -1;//Edge Case
     int firstlargest=INT_MIN,secondlargest=INT_MIN;
     for(int i=0; i<n; i++){
        if(nums[i] > firstlargest){
            secondlargest=firstlargest;
            firstlargest=nums[i];
        }else if(nums[i] > secondlargest && nums[i] != firstlargest){
            secondlargest=nums[i];
        }
     }
     return (secondlargest == INT_MIN) ? -1 : secondlargest;
}
};
int main(){
    solution sol;
    vector<int>nums={8,8,7,6,5};
    cout<<sol.secondlargestnum(nums)<<endl;
    return 0;
}
