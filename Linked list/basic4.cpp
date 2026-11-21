/*
Deletion of the Kth element of Linked List
Given the head of a singly linked list and an integer k, delete the kth node of the linked list and return the head of the modified list.
Example 1:                                                  Example 2:
Input: linkedList = [3, 4, 5], k = 2                        Input: linkedList = [1, 2, 3], k = 1
Output: linkedList = [3, 5]                                 Output: [2, 3]
Explanation:The 2nd node with value 4 was removed.
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
    Node* deleteKthNod(Node* &head,int k){
        if(head==nullptr){//Edge Case
            return nullptr;
        }
        if(k==1){//Edge Case
            Node* temp=head;
            head=head->next;
            delete temp;
            return head;
        }
        int cnt=0;
        Node* temp=head;
        Node* previous=nullptr;
        while(temp != nullptr){
            cnt++;
            if(cnt==k){
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
    int k=2;
    Node* head=createll(nums);
    Solution obj1;
    head=obj1.deleteKthNod(head,k);
    obj1.printll(head);
    return 0;
}