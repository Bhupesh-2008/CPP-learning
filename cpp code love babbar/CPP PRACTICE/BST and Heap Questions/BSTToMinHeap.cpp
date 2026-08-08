#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int x){
            this->data=x;
            this->left=NULL;
            this->right=NULL;
        }
};

void LevelOrderTraversal(Node* root){
    if(root==NULL) return ;

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

Node* insertToBSTtree(Node* root, int d){
    if(root==NULL){
        root= new Node(d);
        return root;
    }

    if(d>root->data){
        root->right= insertToBSTtree(root->right,d);
    }else{
        root->left= insertToBSTtree(root->left,d);
    }

    return root;
}

void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root=insertToBSTtree(root,data);
        cin>>data;
    }
}

void inorder(Node* root, vector<int>& v){
    if(root==NULL) return ;
    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right,v);
}

void fillPreorder(Node* root,vector<int>inorder,int &index){
    if(root==NULL) return;
    root->data=inorder[index++];
    fillPreorder(root->left,inorder,index);
    fillPreorder(root->right,inorder,index);
}

void BSTToHeap(Node* root){
    vector<int>in;
    inorder(root,in);
    int index=0;
    fillPreorder(root,in,index);
}

int main(){
    Node* root= NULL;
    cout<<"Enter the datato create a BST"<<endl;
    takeInput(root);

    cout<<endl<<"Printing the BST Tree: "<<endl;
    LevelOrderTraversal(root);

    BSTToHeap(root);
    cout<<endl;
    LevelOrderTraversal(root);
    
    return 0;
}