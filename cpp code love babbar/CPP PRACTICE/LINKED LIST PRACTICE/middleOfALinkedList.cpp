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
    Node* temp=head;
    while(temp!= NULL){
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

int countNodes(Node* &head){
    Node* temp = head;
    int cnt=0; 
    while(temp!=NULL){
        cnt++;
        temp= temp->next;
    }
    return cnt;
}

int middleOfLinkedList(Node* &head, int length){
    Node* temp= head;
    int cnt=0; 
    while(cnt<(length/2)){
        temp= temp->next;
        cnt++;
    }
    return temp->data;
}

int main(){
    Node* node1= new Node(1);
    Node* head= node1;
    Node* tail= node1;

    insertAtTail(tail,2);
    insertAtTail(tail, 3);
    insertAtTail(tail, 4);
    insertAtTail(tail,5);
    print (head);

    int length= countNodes(head);
    cout<<"Linked List is having length of "<<length<<endl;
    int ans= middleOfLinkedList(head, length);
    cout<<"Middle element of linked list is: "<<ans<<endl;
    return 0;
}