/*
Traversal in Linked List
Given the head of a singly Linked List. Traverse the entire Linked List and return its elements in an array in the order of their appearance.

Example 1:
Input: linkedList = [5, 4, 3, 1, 0]
Output: [5, 4, 3, 1, 0]
Explanation:The nodes in the Linked List are 5 -> 4 -> 3 -> 1 -> 0, with the head pointing to node with value 5.

Example 2:
Input: linkedList = [1]
Output: [1]
Explanation:Only one node (head) present in the list.*/
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class ListNode{
    public:
    int data;
    ListNode* next;
    ListNode(int data){
        this->data=data;
        this->next=nullptr;
    }
};
//Create Linkedlist
ListNode* CreateLL(vector<int>&nums){
    ListNode* head=new ListNode(nums[0]);
    ListNode* temp=head;
    for(int i=1; i<nums.size(); i++){
           temp->next=new ListNode(nums[i]);
           temp=temp->next;
    }
    return head;
}
class Solution{
    public:
    vector<int>traverse(ListNode* head){
        vector<int>ans;
        ListNode* temp=head;
        while(temp != nullptr){
            ans.push_back(temp->data);
            temp=temp->next;
        }
        return ans;
    }
};
int main(){
    vector<int>nums={5,4,3,1,0};
    ListNode* head=CreateLL(nums);
    Solution obj1;
    vector<int>ans=obj1.traverse(head);
    for(auto it : ans){
        cout<<it<<"->";
    }
    cout<<"NuLL";
    return 0;
}