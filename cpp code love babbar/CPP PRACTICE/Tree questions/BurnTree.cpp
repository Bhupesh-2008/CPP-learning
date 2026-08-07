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

Node* createMapping(Node* root,int target ,map<Node*, Node*> &nodeToParent){
    Node* res=NULL;
    queue<Node*>q;
    q.push(root);
    nodeToParent[root]=NULL;

    while(!q.empty()){
        Node* frontNode= q.front();
        q.pop();

        if(frontNode->data==target) res=frontNode;

        if(frontNode->left){
            nodeToParent[frontNode->left]=frontNode;
            q.push(frontNode->left);
        }
        if(frontNode->right){
            nodeToParent[frontNode->right]=frontNode;
            q.push(frontNode->right);
        }
    }

    return res;
}

int burnTree(Node* root,map<Node*,Node*> nodeToParent ){
    map<Node*,bool>visited;
    queue<Node*> q;
    q.push(root);
    visited[root]=1;

    int ans=0;
    while(!q.empty()){
        int size= q.size();
        bool flag=0;
        for(int i=0; i<size; i++){
            Node* front= q.front();
            q.pop();

            if(front->left && !visited[front->left]){
                flag=1;
                q.push(front->left);
                visited[front->left]=1;
            }
            if(front->right && !visited[front->right]){
                flag=1;
                q.push(front->right);
                visited[front->right]=1;
            }
            if(nodeToParent[front] && !visited[nodeToParent[front]]){
                flag=1;
                q.push(nodeToParent[front]);
                visited[nodeToParent[front]]=1;
            } 
        }
        if(flag==1)ans++;
    }
    return ans;
}

int minTime(Node* root,int target){
    map<Node*,Node*> nodeToParent;
    Node*targetNode= createMapping(root,target,nodeToParent);
    int ans= burnTree(targetNode,nodeToParent);

    return ans;
}

int main(){
    Node* root= NULL ;
    root=buildTree(root);
    // 1 2 4 -1 -1 5 7 -1 -1 8 -1 -1 3 -1 6 -1 9 -1 10 -1 -1 8

    int target=0;
    cout<<"Enter the target Node value: ";
    cin>>target;

    cout<<"\n Printing the data in the tree: ";
    LevelOrderTraversal(root);
    cout<<"\n";

    int ans= minTime(root,target);
    cout<<"Minimum Time to burn the tree is: "<<ans;
    

    return 0;
}
  