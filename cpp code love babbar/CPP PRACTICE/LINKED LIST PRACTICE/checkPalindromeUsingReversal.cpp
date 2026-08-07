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

Node* reverse(Node* & head){
    if(head==NULL ||head->next==NULL){
        return head;
    }
    Node* chhotaHead=reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return chhotaHead;
}

Node* cloneList(Node* & head){
    if(head==NULL) return NULL;

    Node* newHead= new Node(head->data);
    Node* tail=newHead;
    Node* temp= head->next; 
    while(temp!=NULL){
        Node* newNode= new Node(temp->data);
        tail->next= newNode;
        tail= newNode;
        temp= temp->next;
    }
    return newHead;
}

bool check(Node* head1, Node* head2){
    Node* temp1= head1;
    Node* temp2= head2;

    while(temp1!=NULL && temp2!=NULL){
        if(temp1->data !=temp2->data) return false;
        else{
            temp1= temp1->next;
            temp2= temp2->next;
        }
    }
    return (temp1==NULL && temp2==NULL);
}

int main(){
    Node* node1= new Node(1);
    Node* head1= node1;
    Node* tail= node1;

    insertAtTail(tail,2);
    insertAtTail(tail, 3);
    insertAtTail(tail,1);
    insertAtTail(tail,1);
    print (head1);

    Node* head2= cloneList(head1);
    head2=reverse(head2);
    print(head2);
    
    cout<<(check(head1, head2)==1? "Linked List is palindrome ":"Linked List is not a palindrome")<<endl;
}