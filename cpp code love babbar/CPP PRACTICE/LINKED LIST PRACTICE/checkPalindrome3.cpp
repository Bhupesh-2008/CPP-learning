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

int len(Node* &head){
    Node* temp= head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        temp= temp->next;
    }
    return cnt;
}

Node* reverse(Node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* chhotaHead= reverse(head->next);
    head->next->next= head;
    head->next= NULL;
    return chhotaHead;
}

bool check(Node* &head){
    if(head->next==NULL) return true;
    int middlePos= len(head)/2;
    Node* temp= head;
    int cnt=0;
    while(cnt<middlePos){
        temp= temp->next;
        cnt++;
    }
    temp->next= reverse(temp->next);
    Node*back= temp->next;
    Node*front= head;
    while(back!=NULL){
        if(front->data!= back->data) return false;
        front= front->next;
        back= back->next;
    }
    temp->next= reverse(temp->next);

    return true;
}

int main(){
    Node* node1= new Node(1);
    Node* head1= node1;
    Node* tail= node1;

    insertAtTail(tail,2);
    insertAtTail(tail, 3);
    insertAtTail(tail,3);
    insertAtTail(tail,2);
    insertAtTail(tail,1);
    print (head1);
    
    cout<<(check(head1)==1? "Linked List is palindrome ":"Linked List is not a palindrome")<<endl;
}