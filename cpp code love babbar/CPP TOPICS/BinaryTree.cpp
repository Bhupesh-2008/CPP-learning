#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int d){
            this->data=d;
            this->left= NULL;
            this->right=NULL;
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

void inorder(Node* root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node* root){
    if(root==NULL)return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void buildFromLevelOrderTraversal(Node* & root){
    queue<Node*>q;
    cout<<"Enter the data for root: ";
    int data;
    cin>>data;
    root= new Node(data);
    q.push(root);

    while(!q.empty()){
        Node* temp= q.front();
        q.pop();

        cout<<"Enter the data for left of "<<temp->data<<": ";
        int leftData;
        cin>>leftData;
        if(leftData!=-1) {
            temp->left= new Node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter the data for right of "<<temp->data<<": ";
        int rightData;
        cin>>rightData;
        if(rightData!=-1) {
            temp->right= new Node(rightData);
            q.push(temp->right);
        }
    }
}
int main(){
    Node* root= NULL ;
    // root=buildTree(root);
    // // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

    // cout<<"\n Printing the data in the tree: ";
    // LevelOrderTraversal(root);
    // inorder(root);
    // cout<<"\n";
    // preorder(root);
    // cout<<"\n";
    // postorder(root);

    buildFromLevelOrderTraversal(root);
    LevelOrderTraversal(root);

    return 0;
}