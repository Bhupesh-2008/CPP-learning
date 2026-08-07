#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;

    Node(int d){
        this->data= d;
        this->prev= NULL;
        this->next= NULL;
    }

    ~Node(){
        int value= this->data;
        while(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory is deleted for: "<<value<<endl;
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

int getLen(Node* &head){
    int len=0;
    Node*temp= head;
    while(temp!= NULL){
        len++;
        temp= temp->next;
    }
    return len;
}

void insertAtHead(Node* &head,Node* &tail,int d){
    if(head==NULL){
        Node* temp= new Node(d);
        head= temp;
        tail= temp;
    }else{
    Node*temp=new Node(d);
    temp->next= head;
    head->prev= temp;
    head= temp;
    }
}

void insertAtTail(Node* &head,Node* &tail, int d){
    if(tail==NULL){
        Node* temp= new Node(d);
        tail= temp;
        head= temp;
    }else{
    Node* temp= new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail= temp;
    }
}

void insertAtPosition(Node* &head,Node* &tail,int d,int position){
    if(position==1){
        insertAtHead(head,tail, d);
        return;
    }

    Node*temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp= temp->next;
        cnt++;
    }

    if(temp->next==NULL){
        insertAtTail(head,tail,d);
        return;
    }

    Node* nodeToInsert= new Node(d);
    nodeToInsert->next=temp->next;
    temp->next->prev= nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;

}

void deleteNodeAtPosition(Node* &head, Node* &tail, int position){
    if (position==1){
        Node* temp= head;
        if(temp->next!= NULL){
            temp->next->prev= NULL;
            head=temp->next;
        } else{
            head= NULL;
            tail= NULL;
        }
        temp->next=NULL;
        delete(temp);
        return;
    }else{
        Node*curr=head;
        Node*prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr= curr->next;
            cnt++;
        }if(curr->next == NULL){
            tail =prev;
            prev->next =NULL;
        } else{
            prev->next =curr->next;
            curr->next->prev=prev;
        }
        curr->prev=NULL;
        curr->next=NULL;
        delete(curr);
    }
}

int main(){
    Node* node1= new Node(10);
    Node*head= node1;
    Node*tail= node1;

    print(head);
    cout<<"Length of Linked List is: "<<getLen(head);

    insertAtHead(head,tail,20);
    print(head);

    insertAtHead(head,tail,40);
    print(head); 

    insertAtTail(head, tail, 80);
    print(head);

    insertAtTail(head, tail, 120);
    print(head);

    insertAtPosition(head,tail,25,3);
    print(head);

    insertAtPosition(head,tail,105,1);
    print(head);

    insertAtPosition(head,tail,0,8);
    print(head);

    deleteNodeAtPosition(head, tail, 1);
    print(head);

    deleteNodeAtPosition(head, tail,4);
    print(head);

    deleteNodeAtPosition(head, tail, 6);
    print(head);

    return 0;
}