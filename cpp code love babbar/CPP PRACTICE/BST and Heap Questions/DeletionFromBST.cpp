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

Node* minVal(Node* root){
    Node* temp= root;
    while(temp->left) temp= temp->left;
    return temp;
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

Node* deletion(Node* root, int x){
    if(root==NULL) return NULL;
    if(root->data==x){
        //0 child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }

        // 1 child:
            // left child
            if(root->left!=NULL && root->right==NULL){
                Node* temp= root->left;
                delete root;
                return temp;
            }

            //right child
            if(root->left==NULL && root->right!=NULL){
                Node* temp= root->right;
                delete root;
                return temp;
            }

        // 2 child
        if(root->left!=NULL && root->right!=NULL){
            int mini= minVal(root->right)->data;
            root->data= mini;
            root->right= deletion(root->right,mini);
            return root;
        }

    }
    else if(root->data<x){
        root->right=deletion(root->right,x);
        return root;
    }else{
        root->left= deletion(root->left,x);
        return root;
    }
}

int main(){
    Node* root= NULL;
    cout<<"Enter the datato create a BST"<<endl;
    takeInput(root);
    //50 20 70 10 30 90 110 -1

    cout<<endl<<"Printing the BST Tree: "<<endl;
    LevelOrderTraversal(root);

    root= deletion(root, 30);
    cout<<"Deleting the node: "<<endl;
    LevelOrderTraversal(root);
    
    return 0; 
}