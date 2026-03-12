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
        int value= this->data;
        if(this->next!=NULL){
            delete next;
            this->next= NULL;
        }

        cout<<"Memory free for node with value "<<value<<endl;
    }
};

void insertAtHead(Node* &head, int d){
    Node* temp= new Node(d);
    temp->next= head;
    head= temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp= new Node(d);
    tail->next= temp;
    tail= tail->next;
}

void insertAtPosition(Node* &tail,Node* &head, int position, int d){
    if(position==1){
        insertAtHead(head, d);
        return;
    }

    Node* temp= head;
    int cnt=1; 

    while(cnt<position-1){
        temp= temp->next; 
        cnt++;
    }

    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }

    Node* nodeToInsert= new Node(d);
    nodeToInsert->next= temp->next;
    temp->next= nodeToInsert;
}

void deleteNodeAtPosition(Node* &head, int position){
    if(position==1){
        Node*temp= head;
        head= head->next;
        temp->next=NULL;
        delete(temp);
    }
    else{
        Node*curr= head; 
        Node* prev= NULL;
        int cnt=1;

        while(cnt<position){
            prev= curr;
            curr= curr->next;
            cnt++;
        }

        if(curr->next==NULL){
            prev->next=NULL;
        }else{
            prev->next= curr->next;
        }
        curr->next=NULL;
        delete(curr);
    }
}

void deleteNodeAtValue(Node* &head, int value){
    if(head->data== value){
        Node*temp= head;
        head= head->next;
        temp->next=NULL;
        delete(temp);
    }
    else{
        Node*curr= head; 
        Node* prev= NULL;

        while(curr!=NULL && curr->data!=value){
            prev= curr;
            curr= curr->next;
        }
        prev->next= curr->next;
        curr->next=NULL;
        delete(curr);
    }
}

void print(Node* &head){
    Node* temp= head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}
bool detectLoop(Node* &head){
    if(head==NULL) return false;
    Node* temp= head;
    map<Node*,bool>visited;

    while(temp!=NULL){
        if(visited[temp]== true){
            return 1;
        }
        visited[temp]=true;
        temp= temp->next;
    }

    return 0;
}

int main(){
    Node* node1= new Node(10);
    Node*head= node1;
    Node*tail= node1;
    print (node1);

    insertAtTail(tail,12);
    print(head);

    insertAtTail(tail,16);
    print(head);

    insertAtTail(tail,17);
    print(head);

    insertAtPosition(tail,head, 3,25);
    print(head);

    insertAtPosition(tail,head, 1, 101);
    print(head);

    insertAtPosition(tail,head, 7,1);
    print(head);

    insertAtPosition(tail,head, 8, 2);
    print(head);

    deleteNodeAtPosition(head,1);
    print(head);

    deleteNodeAtPosition(head, 5);
    print(head);

    deleteNodeAtPosition(head,6);
    print(head);

    deleteNodeAtValue(head,25);
    print(head);

    cout<< detectLoop(head);

    return 0;
}