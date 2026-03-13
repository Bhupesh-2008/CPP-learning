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
    } cout<<endl;
}

void insertAtTail(Node* &tail,int d){
    Node* temp= new Node(d);
    tail->next= temp;
    tail= temp;
}

Node* deleteDuplicate(Node* & head){
    if(head==NULL){
        return NULL;
    }
    Node* curr= NULL;
    Node* forward= head;
    map<int,bool>visited;
    while(forward!=NULL){
        if(visited[forward->data]==true){
            curr->next= forward->next;
            delete forward;
            forward= curr->next;
        }
        else{
            visited[forward->data]=true;
            curr= forward;
            forward= forward->next;
        }
    }
    return head;
}

int main(){
    // Node* node1= new Node(4);
    // Node* head= node1;
    // Node* tail= node1;

    // insertAtTail(tail,5);
    // insertAtTail(tail,2);
    // insertAtTail(tail,3);
    // insertAtTail(tail,4);
    // insertAtTail(tail,2);
    // insertAtTail(tail,2);

     Node* node1= new Node(1);
    Node* head= node1;
    Node* tail= node1;

    insertAtTail(tail,2);
    insertAtTail(tail,2);
    insertAttail(tail, 3);
    insertAttail(tail,3);
    insertAttail(tail,3);
    insertAttail(tail, 4);
    insertAttail(tail,4);

    print (head);

    deleteDuplicate(head);
    print(head);

    return 0;
}