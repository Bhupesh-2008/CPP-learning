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

void print(Node* tail){
    Node* temp= tail; 
    if(tail==NULL){
        cout<<"List is empty."<<endl;
        return;
    }
    do{
        cout<<temp->data<<" ";
        temp= temp->next;
    }while(temp!= tail);
    cout<<endl;
}

void insert(Node* &tail,int element,int d){
    if(tail==NULL){
        Node* temp= new Node(d);
        tail=temp ;
        temp->next= temp;
        return;
    }
    else{
        Node* curr= tail;
        while(curr->data!= element){
            curr=curr->next;
        }
        Node* temp= new Node(d);
        temp->next= curr->next;
        curr->next= temp;
    }
}

bool checkLinkedListOrNot(Node* &tail){
    if(tail==NULL){
        return true;
    }
    Node* temp= tail->next;
    while(temp!=NULL && temp!= tail){
        temp= temp->next;
    }
    if(temp==tail)return true;

    return false;
}

int main(){
    Node* node1= new Node(1);
    Node* tail=node1;
    tail->next= node1;

    insert(tail,1,2);
    insert(tail,2,3);
    insert(tail,3,4);
    insert(tail,4,5);

    print(tail);

    cout<<checkLinkedListOrNot(tail);

    return 0;
}