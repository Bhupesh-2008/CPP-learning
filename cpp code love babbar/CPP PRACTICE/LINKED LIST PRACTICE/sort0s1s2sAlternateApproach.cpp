#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int d){
            this->data=d;
            this->next=NULL;
        }
};

void print(Node* &head){
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }cout<<endl;
}

void insertAtTail(Node* &tail,int d){
    Node* newNode= new Node(d);
    tail->next= newNode;
    tail=newNode;
}

void insert(Node* &tail, Node* &temp){
    tail->next= temp;
    tail= temp;
}

Node* count(Node* &head){
    Node* zeroHead= new Node(-1);
    Node* zeroTail= zeroHead;
    Node* oneHead= new Node(-1);
    Node* oneTail= oneHead;
    Node* twoHead= new Node(-1);    
    Node* twoTail= twoHead;

    Node* temp= head;
    while(temp!=NULL){
        if(temp->data==0) insert(zeroTail,temp);
        else if(temp->data==1) insert(oneTail,temp);
        else insert(twoTail,temp);
         temp= temp->next;
    }

    //merge 3 lists
    if(oneHead->next==NULL){
        zeroTail->next= twoHead->next;
    }else{
        zeroTail->next= oneHead->next;
    }
    oneTail->next= twoHead->next;
    twoTail->next= NULL;

    head= zeroHead->next;
    delete zeroHead;
    delete oneHead; 
    delete twoHead;

    return head;
}

int main(){
    Node* newNode= new Node(1);
    Node* head= newNode;
    Node* tail= newNode;

    insertAtTail(tail, 2);
    insertAtTail(tail, 0);
    insertAtTail(tail, 1);
    insertAtTail(tail, 2);
    insertAtTail(tail, 0);

    print(head);

    head=count(head);

    print(head);

    return 0;
}