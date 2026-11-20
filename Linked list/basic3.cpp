/*Deletion at End of Linked List
Given a Linked List, delete the tail (i.e., the last node) of the Linked List and return the new head of the modified Linked List.
Examples:
Input: head[] = [1, 2, 3, 4, 5]
Output: 1 -> 2 -> 3 -> 4
Explanation: After deleting tail from the given linked list, we'll be left with just 1 -> 2 -> 3 -> 4.

Input: head[] = [3, 12, 15]
Output: 3 -> 12
Explanation: After deleting tail from the given linked list, we'll be left with just 3 -> 12.*/
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
class Solution{
    public:
    Node* deleteattail(Node* head){
        if(head==nullptr){
            return nullptr;
        }
        if(head->next== nullptr){
            delete head;
            return nullptr;
        }
        Node* temp=head;
        while(temp->next->next != nullptr){
            temp=temp->next;
        }
        delete temp->next;
        temp->next=nullptr;
        return head;
    }
};
int main(){
    Node* head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    head->next->next->next->next=new Node(5);
    Solution obj1;
    Node* temp=obj1.deleteattail(head);
    while(temp){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";

    return 0;
}
