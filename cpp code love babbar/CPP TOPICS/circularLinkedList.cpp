#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// isme jb hm insertion krenge to main chahta hu ki main new node waha insert kru jaha mujhe chahiye to isliye hmm iss mein input denge 2 numbers ki first to hoga linked list mein present data and second will be the element to be inserted in the linked list after the given number


class Node{
    public:
        int data;
        Node* next;

        Node(int d){
            this->data= d;
            this->next= NULL;
        }

        ~Node(){
            int val=this->data;
            while(this->next!= NULL){
                delete next;
                next= NULL;
            }
            cout<<"The value of node deleted is: "<<val<< endl;
        }
};

void print(Node* tail){
    Node* temp= tail;
    if(tail==NULL){
        cout<<"List is empty"<<endl;
    }
    do{
        cout<<temp->data<<" ";
        temp= temp->next;
    }while(temp!= tail);
    cout<<endl;
}

void insert(Node* &tail,int element, int d){
    //assuming that element is present in the list
    if(tail==NULL){
        Node* newNode= new Node(d);
        tail= newNode;
        newNode->next= newNode;
        return;
    }
    else{
        Node* curr= tail;
        while(curr->data!=element ){
            curr=curr->next;
        }
        Node* temp= new Node(d);
        temp->next= curr->next;
        curr->next= temp;
    }
}

void deleteNode(Node* &tail, int value){
    if(tail==NULL){
        cout<<"List is empty!!"<<endl;
        return;
    }else{
        Node*prev=tail;
        Node* curr= prev->next;
        while(curr->data!= value){
            prev= curr;
            curr= curr->next;
        }
        prev->next= curr->next;
        //1 node
        if(curr== prev){
            tail=NULL;
        }
        else if(tail==curr){
            tail= prev;
        }
        curr->next=NULL;
        delete curr;
    }
}

int main(){
    Node* tail= NULL;

    insert(tail, 1 , 3);
    print(tail);

    insert(tail, 3 , 5);
    print(tail);

    insert(tail, 5 , 101);
    print(tail);

    insert(tail, 5 , 7);
    print(tail);

    insert(tail, 3 , 8);
    print(tail);

    deleteNode(tail, 5);
    print(tail);

    deleteNode(tail, 101);
    print(tail);

    deleteNode(tail, 3);
    print(tail);
    
    deleteNode(tail, 7);
    print(tail);

    deleteNode(tail, 8);
    print(tail);

    deleteNode(tail, 4);
    print(tail);
}