/*Delete Head of Linked List
Given a Linked List, delete the head of the Linked List and return the new head of the modified Linked List.
Note: Set the original head to NULL.
Examples:
Input:Head->8->2->3->1->7->Null
Output: 2 -> 3 -> 1 -> 7
Explanation: After deleting head from the given linked list, we'll be left with just 2 -> 3 -> 1 -> 7.
    
Input:Head->2->5->7->8->99->100->Null
Output: 5 -> 7 -> 8 -> 99 -> 100
Explanation: After deleting head from the given linked list, we'll be left with just 5 -> 7 -> 8 -> 99 -> 100.*/
#include <iostream>
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
    Node* deletehead(Node* &head){
        if(head==nullptr){
            return nullptr;
        }
      Node* temp=head;
      head=head->next;
      delete temp;//delete Head
      return head;
    }
};
int main(){
    Node* head=new Node(8);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(1);
    head->next->next->next->next=new Node(7);
    Solution obj1;
    Node* temp=obj1.deletehead(head);
    while(temp){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    return 0;
}




   