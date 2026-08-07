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

vector<int> verticalOrderTraversal(Node* root){
    vector<int>ans;
    //map-> first int: H.D  second inner map-> first int: level
    map<int,map<int,vector<int>>> nodes;
    if(root==NULL) return ans;
    //queue-> inner pair-> first int: H.D, second int: Level
    queue<pair<Node*,pair<int,int>>> q;
    q.push(make_pair(root,make_pair(0,0)));

    while(!q.empty()){
        pair<Node* ,pair<int,int>> temp= q.front();
        q.pop();
        Node* frontNode= temp.first;
        int HD= temp.second.first;
        int lvl= temp.second.second;

        nodes[HD][lvl].push_back(frontNode->data);
        if(frontNode->left) q.push(make_pair(frontNode->left,make_pair(HD-1,lvl+1)));
        if(frontNode->right) q.push(make_pair(frontNode->right,make_pair(HD+1,lvl+1)));
    }
    for(auto i:nodes){
        for(auto j:i.second){
            for(auto k:j.second){
                ans.push_back(k);
            }
        }
    }

    return ans;
}

int main(){
    Node* root= NULL ;
    root=buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

    cout<<"\n Printing the data in the tree: ";
    LevelOrderTraversal(root);

    vector<int>res= verticalOrderTraversal(root);
    cout<<"Vertical Order Traversal of root is: ";
    for(auto i:res){
        cout<<i<<" ";
    }
    cout<<"\n";

    return 0;
}
