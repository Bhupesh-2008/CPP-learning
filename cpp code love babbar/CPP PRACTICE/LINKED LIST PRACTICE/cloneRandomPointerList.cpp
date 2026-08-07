#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* random;

    Node(int val){
        data =val;
        next =NULL;
        random =NULL;
    }
};

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<"Data: "<<temp->data;
        if(temp->random)
            cout<<", Random: "<<temp->random->data;
        else
            cout<<", Random: NULL";
        cout<<endl;
        temp=temp->next;
    }
}

void insertAtTail(Node* &head,Node* &tail, int d){
    Node* temp= new Node(d);
    if(head==NULL){
        head =temp;
        tail =temp;
    } else{
        tail->next=temp;
        tail= temp;
    }

}

Node*copyList(Node* &head){
    // step1: create a clone list
    Node*cloneHead= NULL;
    Node* cloneTail=NULL;

    Node* temp= head;
    while(temp!=NULL){
        insertAtTail(cloneHead,cloneTail,temp->data);
        temp= temp->next;
    }

    //Step 2: Create a map
    unordered_map<Node*,Node*> oldToNew;
    Node* originalNode= head;
    Node* cloneNode= cloneHead;
    while(originalNode!=NULL && cloneNode!= NULL){
        oldToNew[originalNode]=cloneNode;
        originalNode= originalNode->next;
        cloneNode= cloneNode->next;
    }
    originalNode= head;
    cloneNode= cloneHead;

    while(originalNode!=NULL){
        cloneNode->random=oldToNew[originalNode->random];
        originalNode= originalNode->next;
        cloneNode= cloneNode->next;
    }

    return cloneHead;
}

int main() {
    Node* head= new Node(1);
    Node* second= new Node(2);
    Node* third = new Node(3);
    Node* fourth= new Node(4);

    head->next=second;
    second->next=third;
    third->next=fourth;

    head->random=third;   // 1 → 3
    second->random=head;    // 2 → 1
    third->random=fourth;  // 3 → 4
    fourth->random=second;  // 4 → 2

    print(head);

    Node* ans= copyList(head);
    print(ans);

    return 0;
}