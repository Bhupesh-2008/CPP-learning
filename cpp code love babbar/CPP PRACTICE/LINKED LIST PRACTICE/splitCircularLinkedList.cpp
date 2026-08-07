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
    do{
        cout<<temp->data<<" ";
        temp= temp->next;
    }while(temp!= head);
    cout<<endl;
}

void insert(Node* &tail, int element, int d){
    if(tail==NULL){
        Node* newNode= new Node(d);
        tail= newNode;
        newNode->next= newNode;
        return;
    }
    else{
        Node* temp= tail;
        while(temp->data!= element){
            temp= temp->next;
        }
        Node* newNode= new Node(d);
        newNode->next=temp->next;
        temp->next= newNode;

        if(temp==tail){
            tail= newNode;
        }
    }
}

void splitCircularLinkedList(Node* head, Node* &head1, Node* &head2 ){
    if(head==NULL || head->next==head){
        head1= head;
        head2= NULL;
        return;
    }
    Node* slow= head;
    Node* fast= head;
    while(fast->next!= head && fast->next->next!=head){
        fast= fast->next->next;
        slow= slow->next;
    }
    if(fast->next->next== head){
        fast= fast->next;
    }
    head1= head;
    head2= slow->next;

    slow->next= head1;
    fast->next= head2;
}

int main(){
    Node* tail= NULL;

    insert(tail, 1 , 3);
    insert(tail, 3 , 5);
    insert(tail, 5 , 101);
    insert(tail, 5 , 7);
    insert(tail, 3 , 8);
    insert(tail,101,4);
    print(tail);

    Node* head1= NULL;
    Node* head2= NULL;
    splitCircularLinkedList(tail,head1, head2);
    cout<<"First half of linked list: ";
    print(head1);

    cout<<"Second half of linked list: ";
    print(head2);
    return 0;
}