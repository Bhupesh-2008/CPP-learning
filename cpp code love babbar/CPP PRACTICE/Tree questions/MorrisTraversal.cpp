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

vector<int>morrisInorder(TreeNode* root){
    vector<int>res;
    if(root==NULL){
        res.push_back(NULL);
        return res;
    }

    TreeNode* curr= root;
    while(curr!= NULL){
        if(curr->left==NULL){
            res.push_back(curr->val);
            curr= curr->right;
        }
        else{
            TreeNode* pred= curr->left;
            while(pred->right!=NULL && pred->right!=curr){
                pred= pred->right;
            }

            if(pred->right== NULL){
                pred->right= curr;
                curr= curr->left;
            }else{
                pred->right=NULL;
                res.push_back(curr->val);
                curr= curr->right;
            }
        }
    }
    return res;
}