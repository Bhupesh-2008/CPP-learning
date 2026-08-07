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

int height(Node* root) {
    if(root==NULL) return 0;
    int h1= height(root->left);
    int h2= height(root->right);
    return 1+max(h1,h2);
}

//Brute Fore sol. for diameter with T.C=O(n^2)
int diameter(Node* root){
    if(root==NULL) return 0;
    int opt1= diameter(root->right);
    int opt2= diameter(root->left);
    int opt3= 1+height(root->left)+height(root->right);

    return max(opt1,max(opt2,opt3));
}

//optimal approach for calculation of diameter with T.C=O(n)
pair<int,int> diameterFast(Node* root){
    if(root==NULL){
        pair<int,int>p=make_pair(0,0);
        return p;
    }
    pair<int,int>left= diameterFast(root->left);
    pair<int,int> right= diameterFast(root->right);

    int opt1=left.first;
    int opt2= right.first;
    int opt3= 1+left.second+right.second;

    pair<int,int>ans;
    ans.first= max(opt1,max(opt2,opt3));
    ans.second= max(left.second,right.second)+1;

    return ans;
}

int main(){
    Node* root= NULL ;
    root=buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

    cout<<"\n Printing the data in the tree: ";
    LevelOrderTraversal(root);
    cout<<"\n"<<diameter(root);
    cout<<"\n"<<diameterFast(root).first;

    return 0;
}
