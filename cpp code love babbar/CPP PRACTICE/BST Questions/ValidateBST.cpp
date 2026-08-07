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

int min(Node* root){
    Node* temp= root;
    while(temp!=NULL){
        temp= temp->left;
    }
    return temp->data;
}

int max(Node* root){
    Node* temp= root;
    while(temp!=NULL){
        temp= temp->right;
    }
    return temp->data;
}

bool isBST(Node* root,int min,int max){
    if(root==NULL)return true;
    if(root->data >=min && root->data<=max){
        bool left= isBST(root->left,min,root->data);
        bool right= isBST(root->right,root->data,max);
        return left && right;
    }
    else return false;
}

int main(){
    Node* root= NULL;
    cout<<"Enter the datato create a BST"<<endl;
    takeInput(root);

    cout<<endl<<"Printing the BST Tree: "<<endl;
    LevelOrderTraversal(root);

    if(isBST(root,min(root),max(root))) cout<<"Tree is a valid BST.";
    else cout<<"Tree is not a valid BST";
    
    return 0;
}