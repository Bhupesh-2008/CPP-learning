#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(56);

    s.pop();

    cout<<"top element of stack is:"<<s.top();

    cout<<endl;
    if(s.empty()){
        cout<<"Stack is empty";
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }

    cout<<"Size of stack is:"<< s.size()<<endl;
    return 0;
}