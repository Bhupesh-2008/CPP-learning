#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* mergeLists(Node* l1, Node* l2) {
    Node dummy{0, nullptr};
    Node* tail = &dummy;
    while(l1 && l2) {
        if(l1->data < l2->data) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }
    tail->next = (l1 ? l1 : l2);
    return dummy.next;
}

int main() {
    // Example: merge [1,3,5] and [2,4,6]
    Node* a = new Node{1, new Node{3, new Node{5, nullptr}}};
    Node* b = new Node{2, new Node{4, new Node{6, nullptr}}};

    Node* merged = mergeLists(a, b);

    Node* temp = merged;
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
    return 0;
}