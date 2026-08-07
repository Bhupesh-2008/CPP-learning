#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int data){
        this->data= data;
        this->next= NULL;
    }

    ~Node(){
        int value= this->data;
        if(this->next!=NULL){
            delete next;
            this->next= NULL;
        }

        cout<<"Memory free for node with value "<<value<<endl;
    }
};

void insertAtTail(Node* &tail, int d){
    Node* temp= new Node(d);
    tail->next= temp;
    tail= tail->next;
}

void print(Node* &head){
    Node* temp= head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}

Node* floydsLoopDetect(Node* &head){
    if(head==NULL) return NULL;

    Node* fast= head;
    Node* slow= head;

    while(fast!= NULL && fast->next!=NULL){
        fast= fast->next->next;
        slow= slow->next;
        if(fast== slow) return slow;
    }
    return NULL;
}

Node* getStartingNode(Node* &head){
    if(head==NULL) return NULL;
    Node*intersection= floydsLoopDetect(head);
    Node* slow= head;
    while(slow!=intersection){
        slow=slow->next;
        intersection= intersection->next;
    }
    return slow;
}

void removeLoop(Node* &head){
    if(head==NULL) return;
    Node* startingNode= getStartingNode(head);
    if(startingNode==NULL) return;
    Node* temp= startingNode;
    while(temp->next!=startingNode){
        temp= temp->next;
    }
    temp->next=NULL;
}

int main(){
    Node* node1= new Node(1);
    Node* head= node1;
    Node* tail= node1;

    insertAtTail(tail,2);
    insertAtTail(tail,3);
    insertAtTail(tail,4);
    insertAtTail(tail,5);
    
    Node* temp= head;
    while(temp->data!=3 && temp!=NULL){
        temp= temp->next;
    }
    tail->next= temp;

    cout<< (floydsLoopDetect(head)? "yes loop detected":"No loop not present");

    cout<<endl<<getStartingNode(head)->data<<" is the starting node of the loop"<<endl;
    removeLoop(head);
    print(head);

    return 0;
}