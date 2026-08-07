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

int pos(vector<int>inorder,int element,int size){
    for(int i=0; i<size; i++){
        if(inorder[i]==element) return i;
    }
    return -1;
}

Node* solve(vector<int>&inorder,vector<int>&preorder,int size,int &index,int inorderStart,int inorderEnd){
    //base case
    if(index>=size || inorderStart>inorderEnd) return NULL;
    int element= preorder[index++];
    Node* root= new Node(element);
    int position= pos(inorder,element,size);

    root->left= solve(inorder,preorder,size,index,inorderStart,position-1);
    root->right= solve(inorder,preorder,size,index,position+1,inorderEnd);

    return root;
}

Node* Tree(vector<int>inorder,vector<int>preorder){
    int n= inorder.size();
    int preOrderIndex=0;
    Node* ans= solve(inorder,preorder,n,preOrderIndex,0,n-1);
    return ans;
}

void postOrder(Node* root){
    if(root==NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main(){
    vector<int> inorder= {3,1,4,0,5,2};
    vector<int>preorder={0,1,3,4,2,5};
    Node* tree= Tree(inorder,preorder);
    postOrder(tree);

    return 0;
}
  