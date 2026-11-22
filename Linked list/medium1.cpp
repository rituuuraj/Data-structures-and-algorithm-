//Delete Node in a Linked List
//Solve On Leetcode-237
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class Listnode{
    public:
    int value;
    Listnode* next;
    Listnode(int data){
        this->value=data;
        this->next=nullptr;
    }
    Listnode(int data,Listnode* next){
        this->value=data;
        this->next=next;
    }
};
Listnode* createll(vector<int>&nums){//Create Linked list
    Listnode* head=new Listnode(nums[0]);
    Listnode* newnode=head;
    for(int i=1; i<nums.size(); i++){
        newnode->next=new Listnode(nums[i]);
        newnode=newnode->next;
    }
    return head;

};
void printll(Listnode* head){//Print Linked list
    while(head){
        cout<<head->value<<"->";
        head=head->next;
    }
    cout<<"NULL";
}
//Approach-1/Brute Force/TC=O(n),SC=O(1)
class Solution{
    public:
    void deleteNode(Listnode* node){
        Listnode* previous=nullptr;
        while(node!= nullptr && node->next != nullptr){
           node->value=node->next->value;
           previous=node;
           node=node->next;
        }
        previous->next=nullptr;
        delete(node);
    }
};
//Approach-2/Optimized/TC=O(1),SC=O(1);
class Solution{
    public:
    void deleteNode(Listnode* node){
        node->value=node->next->value;
         Listnode* temp = node->next;

        node->next = node->next->next;

        delete temp;
    }
};
int main(){
    vector<int>nums={4,5,1,9};
    Listnode* head=createll(nums);
    printll(head);
    cout<<"Before Deletion"<<endl;
    Solution obj1;
    obj1.deleteNode(head->next);
    cout<<"After Deletion"<<endl;
    printll(head);

    return 0;
}


