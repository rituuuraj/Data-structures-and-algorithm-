/*
Delete the element with value X
Given the head of a singly linked list and an integer X, delete the node with value X and return the head of the modified list.
Example 1:                                        Example 2:
Input: linkedList = [3, 4, 5], X = 5              Input: linkedList = [3, 4, 5], X = 7
Output: [3, 4]                                    Output: [3, 4, 5]                                     
Explanation:The node with value 5 was removed.    Explanation:No nodes were removed.
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
};
Node* createll(vector<int>&nums){//Create Linkedlist
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
    Node* deleteKthvalue(Node* &head,int element){
        if(head==nullptr){//Edge Case
            return nullptr;
        }
        if(head->data==element){//edge Case
           Node* temp=head;
           head=head->next;
           delete temp;
           return head;
        }
        Node* temp=head;
        Node* previous=nullptr;
        while(temp!= nullptr){
            if(temp->data==element){//Delete value
                previous->next=temp->next;
                delete temp;
                break;
            }
            previous=temp;
            temp=temp->next;
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
};
int main(){
    vector<int>nums={3,4,5};
    int element=3;
    Node* head=createll(nums);
    Solution obj1;
    head=obj1.deleteKthvalue(head,element);
    obj1.printll(head);
    return 0;
}