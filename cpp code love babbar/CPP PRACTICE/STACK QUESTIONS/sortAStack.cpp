#include<bits/stdc++.h>
using namespace std;

void insertSorted(stack<int> &s,int x){
    // base case
    if(s.empty()|| s.top()<=x){
        s.push(x);
        return;
    }
    int temp =s.top();
    s.pop();
    insertSorted(s,x);
    s.push(temp);
}

void sortStack(stack<int> &s){
    if(s.empty()|| s.size()==1) return;
    int topElem=s.top();
    s.pop();

    sortStack(s);          
    insertSorted(s,topElem); 
}
int main(){
    int n; cin>>n;
    stack<int>s;

    for(int i=0; i<n ;i++){
        int x= 0; cin>>x;
        s.push(x);
    }

    sortStack(s);

    vector<int>ans;
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    reverse(ans.begin(), ans.end());
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }cout<<endl;

    return 0;
}