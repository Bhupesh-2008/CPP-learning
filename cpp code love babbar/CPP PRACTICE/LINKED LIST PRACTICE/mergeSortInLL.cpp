#include<bits/stdc++.h>
#include<iostream>
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
        cout<<"Memory free for node with value "<<data<<endl;
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
    tail= tail->next;
}

Node* findMid(Node* head){
    Node* slow= head;
    Node* fast= head->next;

    while(fast!=NULL && fast->next!= NULL){
        slow= slow->next;
        fast=fast->next->next;
    }
    return slow;
}

Node* merge(Node* left, Node* right){
    if(left==NULL) return right;
    if(right==NULL) return left;

    Node ans(-1);
    Node* temp= &ans;
     
    while(left!=NULL && right!=NULL){
        if(left->data<right->data){
            temp->next= left;
            temp= left;
            left= left->next;
        }else{
            temp->next= right;
            temp= right;
            right= right->next;
        }
    }

    temp->next=(left!=NULL)?left:right;
    return ans.next;
}

Node* mergeSort(Node* &head){
    //base case
    if(head==NULL || head->next==NULL) return head;
    
    //break linjked list into two halves
    Node*mid= findMid(head);

    Node* left=head;
    Node* right= mid->next;
    mid->next= NULL;

    //recursive calls to sort both halves
    left= mergeSort(left);
    right= mergeSort(right);

    //merge both left and right halves
    Node* res= merge(left, right);

    return res;
}

int main(){
    Node* node1= new Node(100);
    Node*head= node1;
    Node*tail= node1;
    insertAtTail(tail,12);
    insertAtTail(tail,167);
    insertAtTail(tail,1);
    insertAtTail(tail,14);
    insertAtTail(tail,1);
    print(head);

    Node* ans=mergeSort(head);
    print(ans);
    return 0;
}

