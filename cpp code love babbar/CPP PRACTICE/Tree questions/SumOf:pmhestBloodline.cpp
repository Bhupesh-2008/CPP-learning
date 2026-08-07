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

void solve(Node* root,int sum,int& maxSum,int len, int& maxLen){
    if(root==NULL){
        if(len>maxLen){
            maxLen= len;
            maxSum=sum;
        }else if(len==maxLen){
            maxSum=max(maxSum,sum);
        }
        return;
    }
    sum= sum+root->data;
    solve(root->left,sum,maxSum,len+1,maxLen);
    solve(root->right,sum,maxSum,len+1,maxLen);
}

int sumOfLongestPath(Node* root){
    int sum=0;
    int maxSum=INT_MIN;
    int len=0; 
    int maxLen=0;
    solve(root,sum,maxSum,len,maxLen);
    return maxSum;
}

int main(){
    Node* root= NULL ;
    root=buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 8 -1 -1 7 -1 9 -1 -1

    cout<<"\n Printing the data in the tree: ";
    LevelOrderTraversal(root);
    cout<<"\n";
    cout<<"Sum of longest path to leaf node is: "<<sumOfLongestPath(root)<<"\n";

    return 0;
}
