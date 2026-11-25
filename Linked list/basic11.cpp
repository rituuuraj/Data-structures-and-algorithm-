/*
Delete head of Doubly Linked List
Given the head of a doubly linked list, remove the node at the head of the linked list and return the head of the modified list.
The head is the first node of the linked list.
Example 1:                                          Example 2:
Input: doublyLinkedList = [1, 2, 3]                 Input: doublyLinkedList = [7]
Output: [2, 3]                                      Output: [ ]
Explanation:The node with value 1 was removed.      Explanation:Note that the head has null value after the removal.
*/
#include<istream>
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
ListNode* createdoublyll(vector<int>&nums){//Create DoublyLinked List
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
    ListNode *deleteHead(ListNode *&head){
        if(head==nullptr || head->next==nullptr){//Edge Case
            return nullptr;
        }
        ListNode* prev=head;
        head=head->next;
        head->back=nullptr;
        prev->next=nullptr;
        delete prev;
        return head;
    }
};
int main(){
    vector<int>nums={1,2,3};
    ListNode* head=createdoublyll(nums);
    cout<<"Before Deledtion"<<endl;
    printll(head);
    Solution obj1;
    head=obj1.deleteHead(head);
    cout<<endl;
    cout<<"After Deletion"<<endl;
    printll(head);
    return 0;
}