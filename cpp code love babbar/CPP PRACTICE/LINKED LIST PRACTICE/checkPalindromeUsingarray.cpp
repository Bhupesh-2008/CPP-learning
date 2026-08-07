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

bool check(Node* & head){
    vector<int>arr;
    Node* temp= head;
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp= temp->next;
    }
    int n= arr.size();
    for(int i=0 ;i<n/2; i++){
        if(arr[i]!=arr[n-1-i]) return false;
    }
    return true;
}

int main(){
    Node* node1= new Node(1);
    Node* head1= node1;
    Node* tail= node1;

    insertAtTail(tail,2);
    insertAtTail(tail, 3);
    insertAtTail(tail,2);
    insertAtTail(tail,1);
    print (head1);
    
    cout<<(check(head1)==1? "Linked List is palindrome ":"Linked List is not a palindrome")<<endl;
}