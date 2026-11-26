/*
Insert node before head in Doubly Linked List
Given the head of a doubly linked list and an integer X, insert a node with value X before the head of the linked list and return the head of the modified list.
Example 1:                                                                           Example 2:
Input: head = [1, 2, 3], X = 3                                                       Input: head = [5], X = 7
Output: head = [3, 1, 2, 3]                                                          Output: head = [7, 5]
Explanation: 3 was added before the 1st node. Note that the head's value is changed.
*/
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class ListNode{
    public:
    int data;
    ListNode* next;
    ListNode* back;
    ListNode(int data){
        this->data=data;
        this->next=nullptr;
        this->back=nullptr;
    }
    ListNode(int data,ListNode* next,ListNode* back){
        this->data=data;
        this->next=next;
        this->back=back;
    }
};
ListNode* createdoublyll(vector<int>&nums){
    ListNode* head=new ListNode(nums[0]);
    ListNode* previous=head;
    for(int i=1; i<nums.size(); i++){
        ListNode* newnode=new ListNode(nums[i],nullptr,previous);
        previous->next=newnode;
        previous=newnode;
    }
    return head;
}
void printll(ListNode* head){
    while(head){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL";
}
class Solution{
    public:
    ListNode* insertBeforeHead(ListNode* head,int x){
        ListNode* newnode=new ListNode(x);
        if(head==nullptr){
            head=newnode;
            return head;
        }
        newnode->next=head;
        newnode->back=nullptr;
        head->back=newnode;
        head=newnode;
        return head;
    }
};
int main(){
    vector<int>nums={1,2,3};
    ListNode* head=createdoublyll(nums);
    cout<<"Before Insertion"<<endl;
    printll(head);
    Solution obj1;
    head=obj1.insertBeforeHead(head,3);
    cout<<endl;
    cout<<"After Insertion"<<endl;
    printll(head);
    return 0;
}