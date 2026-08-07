#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int d){
            this->data= d;
            this->next= NULL;
        }
};

void print(Node* &head){
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}

void insertAtTail(Node* &tail, int data){
    Node* temp= new Node(data);
    tail->next=temp;
    tail= tail->next;
}

Node* reverseLinkedList(Node* &head){
    Node*prev= NULL;
    Node* curr= head;
    Node*forward=NULL;
    while(curr!=NULL){
        forward= curr->next;
        curr->next= prev;
        prev= curr;
        curr= forward;
    }
    return prev;
}

int main(){
    Node* node1= new Node(10);
    Node* head= node1;
    Node*tail= node1;

    insertAtTail(tail,12);
    insertAtTail(tail,14);
    insertAtTail(tail, 16);
    insertAtTail(tail,17);
    print(head);

    head= reverseLinkedList(head);
    tail=head;
    while(tail->next!= NULL){
        tail=tail->next;
    }
    print(head);
}