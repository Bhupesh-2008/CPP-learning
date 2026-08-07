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
    }
    cout<<endl;
}

void insertAtTail(Node* &tail, int d){
    Node* temp= new Node(d);
    tail->next= temp;
    tail= temp;
}

Node* reverse(Node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* chhotaHead= reverse(head->next);
    head->next->next= head;
    head->next=NULL;
    return chhotaHead;
}

int main(){
    Node* node1= new Node(2);
    Node* head= node1;
    Node* tail= node1;

    print(head);
    insertAtTail(tail,3);
    print(head);

    insertAtTail(tail,4);
    print(head);

    insertAtTail(tail,5);
    print(head);

    head= reverse(head);
    print (head);

}