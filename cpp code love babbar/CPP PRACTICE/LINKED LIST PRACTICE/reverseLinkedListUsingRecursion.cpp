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

void reverse(Node* &curr,Node* &head, Node* &prev){
    if(curr==NULL){
        head= prev;
        return;
    }

    Node* forward= NULL;
    reverse(forward, head, curr);
    curr->next= prev;

}

Node* reverseLinkedList(Node* &head){
    Node*prev=NULL;
    Node*curr= head;
    reverse(curr, head, prev);
    return head;
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
    reverseLinkedList()
    print(head);
}