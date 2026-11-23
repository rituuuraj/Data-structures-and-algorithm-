/*
Find the length of the Linked List
You are given the head of a singly linked list. Your task is to return the number of nodes in the linked list.
Example 1:                           Example 2:
Input: head = [1, 2, 3, 4, 5]        Input: head = [8, 6]
Output: 5                            Output: 2
*/
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
    Node(int data,Node* next){
        this->data=data;
        this->next=next;
    }
};
Node* createll(vector<int>&nums){//Create Linked List
    Node* head=new Node(nums[0]);
    Node* newnode=head;
    for(int i=1; i<nums.size(); i++){
        newnode->next=new Node(nums[i]);
        newnode=newnode->next;
    }
    return head;
}
class Solution{
    public:
    int getLength(Node* head){
        int cnt=0;
        Node* temp=head;
        while(temp){
            cnt++;
            temp=temp->next;
        }
        return cnt;
    }
};
int main(){
    vector<int>nums={1,2,3,4,5};
    Node* head=createll(nums);
    Solution obj1;
    cout<<"Count="<<obj1.getLength(head)<<endl;
    return 0;
}