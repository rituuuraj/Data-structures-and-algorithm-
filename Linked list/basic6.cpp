/*
Insertion at the Kth position of Linked List
Given the head of a singly linked list and two integers X and K, insert a node with value X as the kth node of the linked list and return the head of the modified list.
Example 1:                                       Example 2:
Input: linkedList = [1, 2, 3], X = 5, K = 2      Input: linkedList = [], X = 7, K = 1
Output: [1, 5, 2, 3]                             Output: [7]
Explanation:Note that the value of the head was changed.
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
Node* createll(vector<int>&nums){//Create linkedlist
    Node* head=new Node(nums[0]);
    Node* newnode=head;
    for(int i=1; i<nums.size();i++){
        newnode->next=new Node(nums[i]);
        newnode=newnode->next;
    }
    return head;
}
void printll(Node* head){//Print linkedlist
    while(head){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL";
}
class Solution{
    public:
    Node* insertAtKthPosition(Node* head,int k, int x){
           if(head==nullptr){//Edge Case
            if(k==1){
                return new Node(x);
            }else{
                return head;
            }
           }
           if(k==1){//Edge Case
            Node* newnode=new Node(x);
            newnode->next=head;
            return newnode;
           }
           int cnt=0;
           Node* temp=head;
           while(temp != nullptr){
            cnt++;
            if(cnt==k-1){
                Node* newnode=new Node(x);//Insertion at kth Place
                newnode->next=temp->next;//Link Right side
                temp->next=newnode;//Link left Side
                break;
            }
            temp=temp->next;
           }
           return head;
    }
};
int main(){
    vector<int>nums={3,1,5,8};
    Node* head=createll(nums);
    cout<<"Before Insertion"<<endl;
    printll(head);
    Solution obj1;
    Node* temp=obj1.insertAtKthPosition(head,2,2);
    cout<<endl;
    cout<<"After Insertion"<<endl;
    printll(head);
    return 0;
}

