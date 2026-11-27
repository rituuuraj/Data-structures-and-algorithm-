/*
Removing given node in Doubly Linked List
Given a node's reference within a doubly linked list, remove that node from the linked list while preserving the list's integrity.
You will only be given the node's reference, not the head of the list. It is guaranteed that the given node will not be the head of the list.
Example 1:                                                           Example 2:
Input: head = [1, 3, 5], node = 3                                    Input: head = [1, 3, 7], node = 7
Output: [1, 5]                                                       Output: head = [1, 3]
Explanation:The referenced node with value 3 was removed.            Explanation:The referenced node with value 7 was removed.
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
    void deletenthnode(ListNode* node){
        if(node==nullptr){//Edge Case
            return;
        }
        ListNode* prev=node->back;
        ListNode* front=node->next;
        //Edge Case
        if(prev==nullptr && front==nullptr){//Delete Only One Node 
            delete node;
            return;
        }else if(prev==nullptr){//Delete Head Node
            front->back=nullptr;
            delete node;
            return;
        }else if(front==nullptr){//Delete Tail Node
            prev->next=nullptr;
            delete node;
            return;
        }

        prev->next=front;
        front->back=prev;
        delete node;
    }
};
int main(){
    vector<int>nums={1,3,5};
    ListNode* head=createdoublyll(nums);
    cout<<"Before Node Deletion"<<endl;
    printll(head);
    Solution obj1;
    obj1.deletenthnode(head->next);
    cout<<endl;
    cout<<"After Node Deletion"<<endl;
    printll(head);
    return 0;
}