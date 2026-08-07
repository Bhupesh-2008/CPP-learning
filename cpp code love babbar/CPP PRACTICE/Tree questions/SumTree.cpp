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

pair<bool,int>  isSumTree(Node* root){
    if(root==NULL){
        pair<bool,int> p= make_pair(true,0);
        return p;
    }
    if(root->left==NULL && root->right==NULL){
        pair<bool,int> p= make_pair(true,root->data);
        return p;
    }
    pair<bool,int>left= isSumTree(root->left);
    pair<bool,int>right= isSumTree(root->right);

    bool leftAns= left.first;
    bool rightAns= right.first;
    bool cond= root->data== left.second+right.second;
    
    pair<bool,int>ans;
    if(leftAns && rightAns && cond){
        ans.first= true;
        ans.second= 2* root->data;
    }
    else{
        ans.first= false;
        ans.second= root->data+left.second+ right.second;
    }

    return ans;
}

int main(){
    Node* r1= NULL ;
    r1=buildTree(r1);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

    cout<<"\n Printing the data in the tree 1: ";
    LevelOrderTraversal(r1);
    cout<<"\n";

    cout<<((isSumTree(r1).first)?"The given tree is Sum Tree":"The given tree is not a sum tree")<<"\n";

    return 0;
}
