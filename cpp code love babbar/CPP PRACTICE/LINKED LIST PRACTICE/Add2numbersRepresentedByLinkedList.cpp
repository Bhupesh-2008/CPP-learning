#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int d){
            this->data= d;
            this->next=NULL;
        }
};

void print(Node* & head){
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }cout<<endl;
}

void insertAtTail(Node* &tail, int d){
    Node* temp= new Node(d);
    tail->next= temp;
    tail= temp;
}

Node* reverse(Node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* chhotaHead= reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return chhotaHead;
}

Node* add(Node* &first, Node* &second){
    Node* temp1= first;
    Node* temp2= second;
    
    int carry=0;
    Node*ans= new Node(-1);
    Node*headAns= ans;
    Node*tailAns= ans;
    while(temp1!=NULL || temp2!=NULL ||carry!=0){
        int sum= carry ;
        if(temp1!=NULL){
            sum+= temp1->data;
            temp1= temp1->next;
        }
        if(temp2!=NULL){
            sum+= temp2->data;
            temp2= temp2->next;
        }
        insertAtTail(tailAns,sum%10);
        carry= sum/10;
    }
    Node* k= ans->next;
    delete ans;
    return k;
}

Node* addedList(Node* &head1, Node* &head2){
    Node* first= head1;
    Node* second= head2;
    first= reverse(first);
    second= reverse(second);

    Node* ans= add(first,second);
    ans= reverse(ans);
    return ans;
}

int main(){
    Node* node1= new Node(4);
    Node* head1= node1;
    Node*tail1= node1;
    insertAtTail(tail1,5);
    print(head1);

    Node* node2= new Node(3);
    Node* head2= node2;
    Node* tail2= node2;
    insertAtTail(tail2,4);
    insertAtTail(tail2,5);
    print(head2);

    Node* ans=addedList(head1, head2);
    print(ans);

    return 0;
}