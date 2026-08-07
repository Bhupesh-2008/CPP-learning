#include<bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int>& v){
    stack<int>s;
    s.push(-1);

    vector<int>ans(v.size());
    for(int i=v.size()-1; i>=0; i--){
        while(s.top()>=v[i]) s.pop();

        ans[i]=s.top();
        s.push(v[i]);
    }
    return ans;
}

int main(){
    int n=0;
    cin>>n;

    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    vector<int>ans=solve(v);
    for(int i=0; i<ans.size(); i++){
        cout<< ans[i]<<" ";
    }

    return 0;
}