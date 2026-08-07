#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    int n;
    cout<<"Enter no of nodes:";
    cin >> n; 
    Node* head = nullptr;
    Node* tail = nullptr;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        Node* newNode = new Node{x, nullptr};
        if(head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }


    Node* temp = head;
    while(temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}