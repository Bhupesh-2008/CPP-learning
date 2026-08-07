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

void solve(Node* root, vector<int> &v, int level){
    if(root==NULL) return;
    if(level==v.size()) v.push_back(root->data);

    solve(root->right,v,level+1);
    solve(root->left,v,level+1);
}

vector<int> RightView(Node* root){
    vector<int>ans;
    solve(root,ans,0);
    return ans;
}

int main(){
    Node* root= NULL ;
    root=buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 8 -1 -1 7 -1 9 -1 -1

    cout<<"\n Printing the data in the tree: ";
    LevelOrderTraversal(root);
    vector<int>res= RightView(root);
    cout<<"Right View of tree is: ";
    for(auto i:res){
        cout<<i<<" ";
    }

    cout<<"\n";

    return 0;
}
