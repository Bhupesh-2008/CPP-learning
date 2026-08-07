#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int d){
            this->data= d;
            this->next=NULL;
        }
};

void print(Node* & head){
    Node* temp= head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}

void insertAtTail(Node* &tail, int d){
    Node* temp= new Node(d);
    tail->next= temp;
    tail= temp;
}

int middleOfLinkedList(Node* &head){
    Node* fast = head;
    Node* slow= head;

    if(head==NULL){
        cout<<"List is empty !!"<<endl;
        return INT_MIN;
    }

    while(fast!=NULL && fast->next!= NULL){
        fast=fast->next->next;
        slow= slow->next;
    }
    return slow->data;
}

int main(){
    Node* node1 = new Node(1);
    Node* head= node1;
    Node* tail= node1;

    insertAtTail(tail, 2);
    insertAtTail(tail, 3);
    insertAtTail(tail,4);
    insertAtTail(tail, 5);

    print(head);

    int ans= middleOfLinkedList(head);
    cout<<"Middle element of linked list is: "<<ans;

    return 0;
}