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

void count(Node* head){
    Node* temp= head;
    int zer=0;
    int one=0;
    int two=0;
    while(temp!=NULL){
        if(temp->data==0) zer++;
        if(temp->data==1) one++;
        if(temp->data==2) two++;
        temp= temp->next;
    }
    temp= head;
    while(temp!=NULL){
        if(zer!=0){
            temp->data= 0;
            zer--;
        }else if(one!=0){
            temp->data=1;
            one--;
        }else{
            temp->data=2;
            two--;
        }
        temp= temp->next;
    }
}

int main(){
    Node* newNode= new Node(1);
    Node* head= newNode;
    Node* tail= newNode;

    insertAtTail(tail,0);
    insertAtTail(tail,1);
    insertAtTail(tail,0);
    insertAtTail(tail,2);
    print(head);

    count(head);
    print(head);

    return 0;
}