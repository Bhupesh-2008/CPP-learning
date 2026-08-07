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

Node* solve(vector<int>&inorder,vector<int>&postorder,int size,int &index,int inorderStart,int inorderEnd){
    //base case
    if(index<0  || inorderStart>inorderEnd) return NULL;
    int element= postorder[index--];
    Node* root= new Node(element);
    int position= pos(inorder,element,size);


    root->right= solve(inorder,postorder ,size,index,position+1,inorderEnd);
    root->left= solve(inorder,postorder,size,index,inorderStart,position-1);

    return root;
}
  
Node* Tree(vector<int>inorder,vector<int>postorder){
    int n= inorder.size();
    int postOrderIndex=n-1;
    Node* ans= solve(inorder,postorder,n,postOrderIndex,0,n-1);
    return ans;
}

void preOrder(Node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int main(){
    vector<int> inorder= {4,8,2,5,1,6,3,7};
    vector<int>postorder={8,4,5,2,6,7,3,1};
    Node* tree= Tree(inorder,postorder);
    preOrder(tree);

    return 0;
}
  