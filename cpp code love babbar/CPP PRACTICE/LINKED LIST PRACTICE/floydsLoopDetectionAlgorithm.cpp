#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int data){
        this->data= data;
        this->next= NULL;
    }

    ~Node(){
        int value= this->data;
        if(this->next!=NULL){
            delete next;
            this->next= NULL;
        }

        cout<<"Memory free for node with value "<<value<<endl;
    }
};

void insertAtTail(Node* &tail, int d){
    Node* temp= new Node(d);
    tail->next= temp;
    tail= tail->next;
}

void print(Node* &head){
    Node* temp= head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}

Node* floydsLoopDetect(Node* &head){
    if(head==NULL)
}

int main(){
    Node* node1= new Node(1);
    Node* head= node1;
    Node* tail= node1;

    insertAtTail(tail,2);
    insertAtTail(tail,3);
    insertAtTail(tail,4);
    insertAtTail(tail,5);
    
    Node* temp= head;
    while(temp->data!=3 && temp!=NULL){
        temp= temp->next;
    }
    tail->next= temp;

    cout<< (detectLoop(head)? "yes loop detected":"No loop not present");

    return 0;
}