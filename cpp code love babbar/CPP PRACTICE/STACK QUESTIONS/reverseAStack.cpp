#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int>& s, int x){
    if(s.empty()){
        s.push(x);
        return;
    }
    int num= s.top();
    s.pop();
    insertAtBottom(s,x);
    s.push(num);
}

void reverse(stack<int>&s){
    //base case
    if(s.empty()){
        return;
    }
    int num= s.top();
    s.pop();
    reverse(s);

    insertAtBottom(s, num);
}

int main(){
    int n;
    cin>>n; 
    stack<int>s;
    for(int i=0; i<n; i++){
        int x=0; cin>>x;
        s.push(x);
    }

    reverse(s);

    vector<int>ans;
    for(int i=0; i<n; i++){
        ans.push_back(s.top());
        s.pop();
    }

    reverse(ans.begin(),ans.end());
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
    return 0;
}