#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node*reverseList(Node* head) {
    Node*prev= nullptr;
    Node*curr= head;
    while(curr!= nullptr) {
        Node*nextNode = curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextNode;
    }
    return prev;
}

int main() {
    int n; cin >> n;
    Node*head= nullptr;
    Node*tail= nullptr;

    for(int i=0; i<n; i++) {
        int x; cin >> x;
        Node*newNode= new Node{x,nullptr};
        if(head ==nullptr) {
            head =tail =newNode;
        } else {
            tail->next =newNode;
            tail= newNode;
        }
    }

    head = reverseList(head);

    Node*temp =head;
    while(temp!= nullptr) {
        cout<< temp->data << " ";
        temp =temp->next;
    }
    cout << endl;
    return 0;
}