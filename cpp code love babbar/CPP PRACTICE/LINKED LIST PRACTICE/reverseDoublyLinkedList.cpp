#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int d){
            this->data= d;
            this->next= NULL;
            this->prev= NULL;
        }
};

void print(Node* &head){
    Node* temp= head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}

void insertAtTail(Node* &tail, int d){
    if(tail==NULL){
        Node* temp= new Node(d);
        tail= temp;
    }
    Node* temp= new Node(d);
    tail->next= temp;
    temp->prev= tail;
    tail= temp;
}

int middleOfdoublyLinkedList(Node* &head){
    Node* fast= head;
    Node* slow= head;

    while(fast!=NULL && fast->next!= NULL){
        slow= slow->next;
        fast= fast->next->next;
    }

    return slow->data;
}

int main(){
    Node* node1= new Node(1);
    Node* head= node1;
    Node* tail= node1;

    insertAtTail(tail,2);
    insertAtTail(tail,3);
    insertAtTail(tail,4);
    insertAtTail(tail,5);
    insertAtTail(tail, 6);

    print(head);

    int ans= middleOfdoublyLinkedList(head);
    cout<<"Middle of the doubly linked list is: "<<ans;

    return 0;
}