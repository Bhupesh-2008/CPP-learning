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

void convertBSTIntoSortedDoublyLinkedList(Node* root,Node* head){
    if(root==NULL) return;
    convertBSTIntoSortedDoublyLinkedList(root->right,head);
    root->right= head;
    if(head) head->left= root;
    head=root;

    convertBSTIntoSortedDoublyLinkedList(root->left,head);
}

Node* mergeTwoSortedLikedList(Node* head1,Node* head2){
    Node* head=NULL;
    Node* tail=NULL;

    while(head1 && head2){
        if(head1->data< head2->data){
            if(head==NULL){
                head=head1;
                tail= head1;
                head1= head1->right;
            }else{
                tail->right= head1;
                head1->left= tail;
                tail= head1;
                head1= head1->right;
            }
        }else{
            if(head==NULL){
                head=head2;
                tail= head2;
                head1= head2->right;
            }else{
                tail->right=head2;
                head2->left= tail;
                tail= head2;
                head2= head2->right;
            }
        }
    }

    while(head1){
        tail->right= head1;
        head1->left=tail;
        tail=head1;
        head1=head1->right;
    }
    while(head2){
        tail->right=head2;
        head2->left=tail;
        tail=head2;
        head2=head2->right;
    }

    return head;
}

int countNode(Node* head){
    int cnt=0;
    Node* temp= head;
    while(temp!=NULL){
        cnt++;
        temp= temp->right;
    }
    return cnt;
}

Node* linkedListToBST(Node* head,int n){
    if(n<=0 || head==NULL) return NULL;
    Node* left= linkedListToBST(head,n/2);
    Node* root= head;
    root->left= left;
    root->right= linkedListToBST(head,n-(n/2)+1);

    return root;
}

Node* MergeTwoBST(Node* root1,Node* root2){
    Node* head1=NULL;
    //step1: convert bst to linked lists
    convertBSTIntoSortedDoublyLinkedList(root1,head1);
    head1->left=NULL;

    Node* head2=NULL;
    convertBSTIntoSortedDoublyLinkedList(root2,head2);
    head2->left=NULL;

    //step2: merge krdo 2 linked list ko
    Node* head= mergeTwoSortedLikedList(head1,head2);

    //step3: linked list ko bst mein convert krke return krdo
    return linkedListToBST(head,countNode(head));
}

int main(){
    Node* root= NULL;
    cout<<"Enter the datato create a BST"<<endl;
    takeInput(root);

    cout<<endl<<"Printing the BST Tree: "<<endl;
    LevelOrderTraversal(root);
    
    return 0;
}