#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int d){
            this->next= NULL;
            this->data=d;
        }
};

void print(Node* &head){
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    } cout<<endl;
}

void insertAttail(Node* &tail, int d){
    Node* temp= new Node(d);
    tail->next= temp;
    tail= temp;
}

Node* deleteDuplicate(Node* & head){
    Node* curr= head;
    while(curr!= NULL && curr->next!=NULL){
        if(curr->next->data== curr->data){
            Node* dup= curr->next;
            curr->next= curr->next->next;
            delete dup;
        }else{
            curr= curr->next;
        }
    }
    return head;
}

int main(){
    Node* node1= new Node(1);
    Node* head= node1;
    Node* tail= node1;

    insertAttail(tail,2);
    insertAttail(tail,2);
    insertAttail(tail, 3);
    insertAttail(tail,3);
    insertAttail(tail,3);
    insertAttail(tail, 4);
    insertAttail(tail,4);
    print(head);

    deleteDuplicate(head);
    print(head);

    return 0;
}