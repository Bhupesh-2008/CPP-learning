#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Stack{
private:
    struct Node{
        int data;
        Node* next;
    };

private:   Node* top;

public:
    Stack(){
        top=NULL;
    }

    void push(int d){
        Node* temp= new Node();
        temp->data= d;
        temp->next= top;
        top= temp;
    }

    void pop(){
        if(top==NULL){
            cout<<"Stack underflow";
            return;
        }
        int ans= top->data;
        Node* temp= top;
        cout<< ans<<endl;
        top= top->next;
        delete temp;
    }

    bool isEmpty(){
        if(top==NULL){
            return true;
        }else{
            return false;
        }
    }

    void peek(){
        if(top!=NULL){
            cout<<top->data<<endl;
        }else{
            cout<<" Stack is empty bhai!!"<<endl;
        }
    }

    void display(){
        if(top==NULL){
            cout<<"Stack is empty"<<endl;
            return;
        }
        Node* temp= top;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp= temp->next;
        }cout<<endl;
    }
};

int main(){
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.peek();

    s.pop();
    s.display();

    cout <<(s.isEmpty()?"Stack is Empty":"Stack is not Empty")<<endl;

    return 0;
}
