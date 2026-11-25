/*
Convert Array to Doubly Linked List
Given an array arr, convert it into a doubly linked list and return the head of the list.
Example 1:                      Example 2:
Input: arr = [1, 2, 3, 4]       Input: arr = [7, 7]
Output: [1, 2, 3, 4]            Output: [7, 7]
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
class Solution{
    public:
ListNode* arrayToDoublyLinkedList(vector<int>&arr){//Covert Array to DoublyLinkedlist
    if(arr.empty()){//Edge Case
        return nullptr;
    }
    ListNode* head=new ListNode(arr[0]);
    ListNode* previous=head;
    for(int i=1; i<arr.size(); i++){
        ListNode* newnode= new ListNode(arr[i],nullptr,previous);
        previous->next=newnode;
        previous=newnode;
    }
    return head;
}
void printdoublyll(ListNode* head){
    while(head){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"Null";
}
};
int main(){
    vector<int>arr={1,2,3,4};
    Solution obj1;
    ListNode* head=obj1.arrayToDoublyLinkedList(arr);
    obj1.printdoublyll(head);
    return 0;
}