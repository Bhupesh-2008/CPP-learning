#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};


Node* buildTree(Node* root){
    int data;
    cout << "Enter the data: ";
    cin>>data;

    if(data==-1) return NULL;

    root= new Node(data);

    cout<<"Enter the data to insert in left of "<<data<<"\n";
    root->left=buildTree(root->left);

    cout << "Enter the data to insert in right of "<<data<<"\n";
    root->right= buildTree(root->right);
    return root;
}

void LevelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp= q.front();
        q.pop();

        if(temp==NULL){
            cout<<"\n";
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
        }
        }
    }
}

int height(Node* root) {
    if(root==NULL) return 0;
    int h1= height(root->left);
    int h2= height(root->right);
    return 1+max(h1,h2);
}


int main(){
    Node* root= NULL ;
    root=buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

    cout<<"\n Printing the data in the tree: ";
    LevelOrderTraversal(root);
    cout<<"\n"<<height(root);

    return 0;
}
