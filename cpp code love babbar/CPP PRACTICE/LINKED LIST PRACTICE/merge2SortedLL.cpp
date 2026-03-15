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
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    } cout<<endl;
}

void insertAtTail(Node* &tail, int d){
    Node* temp= new Node(d); 
    tail->next= temp;
    tail= temp;
}

Node* mergedLL(Node* &head1, Node* &head2){
    if(head1==NULL) return head2;
    if(head2==NULL) return head1;
    Node*first;
    Node* second;
    if(head1->data<= head2->data){
        first= head1;
        second= head2;
    }
    else{
        first= head2;
        second= head1;
    }

    Node* curr1= first;
    Node* next1=curr1->next;
    Node* curr2= second;

    while(next1!=NULL && curr2!= NULL){
        if(curr1->data<=curr2->data && curr2->data <= next1->data){
            curr1->next= curr2;
           Node* next2= curr2->next;
            curr2->next= next1;
            curr1= curr2;
            curr2= next2;
        }
        else{
            curr1= next1;
            next1= next1->next;
            if(next1==NULL){
                curr1->next= curr2;
                return first;
            }
        }

    }
    return first;
}

int main(){
    Node* node1=new Node(1);
    Node* head1= node1;
    Node* tail1= node1;
    insertAtTail(tail1,4);
    insertAtTail(tail1,5);
    print(head1);

    Node* node2= new Node(2);
    Node* head2= node2;
    Node* tail2= node2;
    insertAtTail(tail2,3);
    insertAtTail(tail2,5);
    print (head2);

    mergedLL(head1, head2);
    print(head1);

    return 0;
}