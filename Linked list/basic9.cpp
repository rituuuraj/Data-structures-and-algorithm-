/*
Search in Linked List
You are given the head of a singly linked list and an integer key.
Return true if the key exists in the linked list, otherwise return false.
Example 1:
Input: head = [1, 2, 3, 4], key = 3
Output: true
Explanation: The linked list is 1 → 2 → 3 → 4. The key 3 is present in the list.

Example 2:
Input: head = [7, 8, 9, 10, 11], key = 5
Output: false
Explanation: The key 5 is not present in the list.
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
class Solution{
    public:
    bool searchKey(Node* head,int key){
        Node* temp=head;
        while(temp != nullptr){
            if(temp->data==key){
                return true;
            }
            temp=temp->next;
        }
        return false;
    }
};
int main(){
    vector<int>nums={1,2,3,4,5};
    Node* head=createll(nums);
    Solution obj1;
    cout<<obj1.searchKey(head, 3)<<endl;
    return 0;
}