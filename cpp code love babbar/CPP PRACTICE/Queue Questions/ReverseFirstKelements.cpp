#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int>q({1,2,3,4,5});
    int n= q.size();
    int k=0; cin>>k;

    stack<int>s;
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    while(n-k>0){
        s.push(q.front());
        q.pop();
        k++;
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }

    for(int i=0; i<n; i++){
        cout<<q.front()<<" ";
        q.pop();
    }

}