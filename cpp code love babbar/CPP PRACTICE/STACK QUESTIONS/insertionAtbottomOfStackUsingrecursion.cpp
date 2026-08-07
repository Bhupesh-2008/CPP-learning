#include<bits/stdc++.h>
using namespace std;

void solve(stack<int>&s, int key){
    //base case
    if(s.empty()){
        s.push(key);
        return ;
    }
    int num= s.top();
    s.pop();

    //recursive call
    solve(s, key);

    s.push(num);
}

void insert(stack<int> &s, int key){
    solve(s,key);
}

int main(){
    int n=0;
    cin>>n;

    stack<int>s;
    for(int i=0; i<n ;i++){
        int x=0; cin>>x;
        s.push(x);
    }

    int key=0; cin>>key;
    insert(s,key);

    vector<int> res;
    while(!s.empty()){
        res.push_back(s.top());
        s.pop();
    }
    reverse(res.begin(), res.end());

    for(int i=0; i<res.size(); i++){
        cout<< res[i]<<" ";
    }cout<<endl;
    return 0;
}