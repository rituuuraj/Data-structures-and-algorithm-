/*
Insertion before the value X in Linked List
Given the head of a singly linked list and two integers X and val.
Insert a node with value val before the node with value X in the linked list and return the head of the modified list.
Example 1:
Input: linkedList = [1, 2, 3], X = 2, val = 5
Output: [1, 5, 2, 3]
Explanation:The node with value 5 was added before the node with value 2

Example 2:
Input: linkedList = [1, 2, 3], X = 7, val = 5
Output: [1, 2, 3]
Explanation:No node was added as X was not found in the list.
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
Node* createll(vector<int>&nums){
    Node* head=new Node(nums[0]);
    Node* newnode=head;
    for(int i=1; i<nums.size(); i++){
        newnode->next=new Node(nums[i]);
        newnode=newnode->next;
    }
    return head;
}
void printll(Node* head){
    while(head){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL";
}
class Solution{
    public:
    Node* insertBeforeX(Node* head,int x,int val){
        if(head==nullptr){
            return nullptr;
        }
        if(head->data==val){
            return new Node(x,head);
        }
        Node* temp=head;
        while(temp->next != nullptr){
            if(temp->next->data==val){
                Node* newnode=new Node(x);
                newnode->next=temp->next;
                temp->next=newnode;
                break;
            }
            temp=temp->next;
        }
        return head;
    }
};
int main(){
    vector<int>nums={1,2,3};
    Node* head=createll(nums);
    cout<<"Before Insertion"<<endl;
    printll(head);
    Solution obj1;
    head=obj1.insertBeforeX(head,5,2);
    cout<<"After Insertion"<<endl;
    printll(head);
    return 0;
}