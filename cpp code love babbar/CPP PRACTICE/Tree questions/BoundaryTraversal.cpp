//check whether the value of every node is equal to the sum of values of its left subtree and right subtree

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

void traverseLeft(Node* root, vector<int>& ans){
    if(root==NULL || (root->left==NULL && root->right== NULL)) return ;
    ans.push_back(root->data);
    if(root->left)traverseLeft(root->left,ans);
    else traverseLeft(root->right,ans);
}

void traverseLeaves(Node* root, vector<int>& ans){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL){
        ans.push_back(root->data);
        return;
    }
    traverseLeaves(root->left,ans);
    traverseLeaves(root->right,ans);
}

void traverseRight(Node* root, vector<int>& ans){
    if(root==NULL || (root->left==NULL && root->right==NULL)) return;
    if(root->right) traverseRight(root->right,ans);
    else traverseRight(root->left,ans);
    ans.push_back(root->data);
}

vector<int>BoundaryTraversal(Node* root){
    vector<int>ans;
    if(root==NULL) return ans;
    ans.push_back(root->data);
    //left part mein traverse kro
    traverseLeft(root->left,ans);

    //leaf nodes ke liye print krvao
        //left part
        traverseLeaves(root->left,ans);
        //right part
        traverseLeaves(root->right,ans);

    //right part ko print krvana hai bottom se top
    traverseRight(root->right,ans);

    return ans;
}

int main(){
    Node* r1= NULL ;
    r1=buildTree(r1);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

    cout<<"\n Printing the data in the tree 1: ";
    LevelOrderTraversal(r1);
    cout<<"\n";

    cout<<"The boundary traversal of tree is: ";
    for(auto i:BoundaryTraversal(r1)) cout<<i<<" ";
    cout<<"\n";

    return 0;
}
