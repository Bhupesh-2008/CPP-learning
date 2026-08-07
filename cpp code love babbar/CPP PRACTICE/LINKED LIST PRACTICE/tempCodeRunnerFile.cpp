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
    if(head==NULL) return NULL;

    Node* fast= head;
    Node* slow= head;

    while(fast!= NULL && fast->next!=NULL){
        fast= fast->next->next;
        slow= slow->next;
        if(fast== slow) return slow;
    }
    return NULL;
}

int main(){