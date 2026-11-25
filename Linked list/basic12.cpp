/*
Delete Tail of Doubly Linked List
Given the head of a doubly linked list, remove the node at the tail of the linked list and return the head of the modified list.
The tail is the last node of the linked list.
Example 1:                                           Example 2:
Input: head = [1, 2, 3]                              Input: head = [7]
Output: head = [1, 2]                                Output: head=[ ]                                
Explanation:The node with value 3 was removed.       Explanation:Note that the head has null value after the removal.
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
void printll(ListNode * head){
    while(head){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL";
}
class Solution{
    public:
    ListNode* deleteTail(ListNode* &head){
        if(head==nullptr || head->next==nullptr){
            return nullptr;
        }
        ListNode* tail=head;
        while(tail->next != nullptr){
            tail=tail->next;
        }
        ListNode* newtail=tail->back;
        newtail->next=nullptr;
        tail->back=nullptr;
        delete tail;
        return head;
    }
};
int main(){
    vector<int>nums={1,2,3};
    ListNode* head=createdoublyll(nums);
    cout<<"Before Delete tail"<<endl;
    printll(head);
    Solution obj1;
    head=obj1.deleteTail(head);
    cout<<endl;
    cout<<"After Delete Tail"<<endl;
    printll(head);
    return 0;
}