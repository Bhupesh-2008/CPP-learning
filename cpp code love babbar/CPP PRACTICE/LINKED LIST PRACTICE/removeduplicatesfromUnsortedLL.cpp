#include<iostream>
#include<bits/stdc++.h>
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
    } cout<<endl;
}

void insertAtTail(Node* &tail,int d){
    Node* temp= new Node(d);
    tail->next= temp;
    tail= temp;
}

Node* deleteDuplicate(Node* &head){
    if(head==NULL){
        return NULL;
    }
    Node* curr= head;
    while(curr!=NULL){
        Node* temp= curr;
        while(temp->next!= NULL){
            if(curr->data== temp->next->data){
                Node* dup= temp->next;
                temp->next= temp->next->next;
                delete dup;
            }else{
                temp= temp->next;
            }
        }
        curr= curr->next;
    }
    return head;
}

int main(){
    Node* node1= new Node(4);
    Node* head= node1;
    Node* tail= node1;

    insertAtTail(tail,5);
    insertAtTail(tail,2);
    insertAtTail(tail,3);
    insertAtTail(tail,4);
    insertAtTail(tail,2);
    insertAtTail(tail,2);

    print (head);

    deleteDuplicate(head);
    print(head);

    return 0;
}