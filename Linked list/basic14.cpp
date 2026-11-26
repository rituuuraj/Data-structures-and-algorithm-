/*
Delete Kth Element of Doubly Linked List
Given the head of a doubly linked list and an integer k, remove the node at the kth position of the linked list and return the head of the modified list.
Example 1:                                            Example 2:
Input: head = [2, 5, 7, 9], k = 2                     Input: head = [2, 5, 7], k = 1
Output: head = [2, 7, 9]                              Output: head = [5, 7]
Explanation:The node with value 5 was removed.        Explanation:The node with value 2 was removed, note that the head was modified.
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
ListNode* createdoubliyll(vector<int>&nums){
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
    ListNode* deleteKthElement(ListNode* &head,int k){
          if(head==nullptr){
            return nullptr;
          }
          int cnt=0;
          ListNode* temp=head;
          while(temp->next != nullptr){
            cnt++;
            if(cnt==k) break;
            temp=temp->next;
          }
          ListNode* previuos=temp->back;
          ListNode* front=temp->next;
          if(previuos==nullptr && front==nullptr){
            delete temp;
            return nullptr;
          }else if(previuos==nullptr){
              head=front;
              head->back=nullptr;
              delete temp;
              return head;
          }else if(front==nullptr){
            previuos->next=nullptr;
            delete temp;
            return head;
          }
          previuos->next=front;
          front->back=previuos;
          delete temp;
          return head;
    }
};
int main(){
    vector<int>nums={1,2,3,4};
    ListNode* head=createdoubliyll(nums);
    cout<<"Before deletetion"<<endl;
    printll(head);
    Solution obj1;
    head=obj1.deleteKthElement(head,3);
    cout<<endl;
    cout<<"After Deletion"<<endl;
    printll(head);
    return 0;
}