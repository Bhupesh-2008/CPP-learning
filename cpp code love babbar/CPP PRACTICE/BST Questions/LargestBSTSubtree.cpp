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

class Info{
    public:
        int maxi;
        int mini;
        bool isBST;
        int size;        
};

Info solve(Node* root, int&ans){
    if(root==NULL){
        return {INT_MIN,INT_MAX,true,0};
    }
    Info left= solve(root->left,ans);
    Info right= solve(root->right,ans);

    Info currnode; 
    currnode.size= left.size+right.size+1;
    currnode.maxi= max(root->data,right.maxi);
    currnode.mini= min(root->data,left.mini);

    if(left.isBST && right.isBST && (root->data>left.maxi && root->data<right.mini)){
        currnode.isBST=true;
    }else currnode.isBST=false;

    if(currnode.isBST) ans= max(ans,currnode.size);

    return currnode;
}

int largestBST(Node* root){
    int maxSize=0;
    Info temp= solve(root,maxSize);
    return maxSize;
}

int main(){
    Node* root= NULL;
    cout<<"Enter the datato create a BST"<<endl;
    takeInput(root);

    cout<<endl<<"Printing the BST Tree: "<<endl;
    LevelOrderTraversal(root);
    
    return 0;
}