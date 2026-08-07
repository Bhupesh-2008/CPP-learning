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

bool isIdentical(Node* r1, Node* r2){
    if(r1==NULL && r2==NULL) return true;
    if(r1==NULL && r2!=NULL) return false;
    if(r1!=NULL && r2==NULL) return false;

    bool left= isIdentical(r1->left, r2->left);
    bool right= isIdentical(r1->right, r2->right);
    bool cond= r1->data== r2->data;

    if(left && right && cond)return true;
    else return false;
} 

int main(){
    Node* r1= NULL ;
    r1=buildTree(r1);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

    Node* r2= NULL ;
    r2=buildTree(r2);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

    cout<<"\n Printing the data in the tree 1: ";
    LevelOrderTraversal(r1);
    cout<<"\n";

    cout<<"\n Printing the data in the tree 2: ";
    LevelOrderTraversal(r2);
    cout<<"\n";

    cout<<((isIdentical(r1, r2))? "Both the trees are identical." : "The trees are not identical.");

    return 0;
}
