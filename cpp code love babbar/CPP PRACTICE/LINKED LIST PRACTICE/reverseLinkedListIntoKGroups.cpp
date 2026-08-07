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
    tail=temp;
}

Node* reverseInGroupsOfK(Node* &head, int k){
    //base call
    if(head==NULL){
        return NULL;
    }

    //step1:reverse first k nodes
    Node* curr=head;
    Node* forward= NULL;
    Node* prev=NULL;
    int cnt=0;

    while(curr!=NULL && cnt<k){
        forward= curr->next;
        curr->next= prev;
        prev= curr;
        curr= forward;
        cnt++;
    }

    //step2: recursion se baaki list se kiya
    if(forward!=NULL){
        head->next=reverseInGroupsOfK(forward,k);
    }

    //step 3: return
    return prev;

}

int main(){
    Node* node1=new Node(1);
    Node* head= node1;
    Node* tail= node1;

    insertAtTail(tail,2);
    insertAtTail(tail,3);
    insertAtTail(tail,4);
    insertAtTail(tail,5);
    insertAtTail(tail,6);

    print(head);

    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    head=reverseInGroupsOfK(head,k);
    print(head);

    return 0;
}