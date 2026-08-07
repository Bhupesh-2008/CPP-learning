#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x){
        this->val=x;
        this->left=NULL;
        this->right=NULL;
    }
};

void flatten(TreeNode* root){
    if(root==NULL) return ;
    TreeNode* curr= root;
    while(curr!=NULL){
        if(curr->left){
            TreeNode* prev= curr->left;
            while(prev->right){
                prev= prev->right;
            }
            prev->right= curr->right;
            curr->right= curr->left;
        }
        curr= curr->right;
    }

    //left parts ko bhi null krna hai
    curr= root;
    while(curr->left){
        curr->left= NULL;
        curr= curr->right;
    }
}