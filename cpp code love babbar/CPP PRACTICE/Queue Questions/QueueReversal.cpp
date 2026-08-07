#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int>q({4,1,5,10,3,2});
    stack<int>s;
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }

    int n=q.size();
    for(int i=0; i<n; i++){
        cout<<q.front()<<" ";
        q.pop();
    }
}