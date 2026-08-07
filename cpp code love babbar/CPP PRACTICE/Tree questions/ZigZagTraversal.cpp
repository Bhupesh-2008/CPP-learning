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

vector<int> zigZagTraversal(Node* root){
    vector<int>result;
    if(root==NULL) return result;
    queue<Node*>q;
    q.push(root);

    bool leftToRight= true;
    while(!q.empty()){
        int size= q.size(); 
        vector<int>ans(size);
        for(int i=0; i<size; i++){
            Node* frontNode= q.front();
            q.pop();

            int index= leftToRight? i: size-i-1;
            ans[index]= frontNode->data;
            if(frontNode->left) q.push(frontNode->left);
            if(frontNode->right) q.push(frontNode->right);
        }
        leftToRight= !leftToRight;
        for(auto i:ans){
            result.push_back(i);
        }
    }
    return result;
}   

int main(){
    Node* r1= NULL ;
    r1=buildTree(r1);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

    cout<<"\n Printing the data in the tree 1: ";
    LevelOrderTraversal(r1);
    cout<<"\n";

    vector<int>ans=zigZagTraversal(r1);
    for(auto i:ans){
        cout<<i<<" ";
    }


    return 0;
}
