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

void inorder(Node* root,vector<int>&v){
    if(root==NULL) return ;
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}

Node* inorderToBST(int s, int e,vector<int>v){
    if(s>e) return NULL;
    int mid= s+(e-s)/2;
    Node* ans= new Node(v[mid]);
    ans->left= inorderToBST(0,mid-1,v);
    ans->right= inorderToBST(mid+1,e,v);

    return ans;
}

vector<int> merge(vector<int>bst1,vector<int>bst2){
    vector<int>ans(bst1.size()+bst2.size());
    int i=0,j=0;
    int k=0;
    while(i<bst1.size() && j<bst2.size()){
        if(bst1[i]<bst2[j]) ans[k++]=bst1[i++];
        else{
            ans[k++]=bst2[j++];
        }
    }

    while(i<bst1.size()){
        ans[k++]= bst1[i++];
    }
    while(j<bst2.size()){
        ans[k++]= bst2[j++];
    }

    return ans;
}

Node* mergeTwoBST(Node* root1, Node* root2){
    vector<int>bst1,bst2;
    inorder(root1,bst1);
    inorder(root2,bst2);

    vector<int>v=merge(bst1,bst2);

    int i=0,e=v.size()-1;
    return inorderToBST(i,e,v);
}

int main(){
    Node* root= NULL;
    cout<<"Enter the datato create a BST"<<endl;
    takeInput(root);

    cout<<endl<<"Printing the BST Tree: "<<endl;
    LevelOrderTraversal(root);
    
    return 0;
}