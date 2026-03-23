#include <bits/stdc++.h>
using namespace std;

void solve( stack<int>&inputstack,int count, int size){
    //base case
    if(count==size/2 ){
        inputstack.pop();
        return ;
    }
    int num= inputstack.top();
    inputstack.pop();

    //recursive call
    solve(inputstack, count+1, size);

    inputstack.push(num);
}

void deleteMiddle(stack<int> &inputstack, int n){
    if(inputstack.empty() || n==0) return ;
    int count=0;
    solve(inputstack,count,n);
}

int main() {
    int n;
    if(!(cin>>n)|| n<=0) return 0;
    stack<int>s;
    for (int i=0;i<n;++i){
        int x; 
        cin>>x;
        s.push(x);
    }

    deleteMiddle(s,n);

    vector<int> result;
    while(!s.empty()){
        result.push_back(s.top());
        s.pop();
    }
    reverse(result.begin(),result.end());
    for(int x:result)cout << x<< " ";
    cout<<'\n';

    return 0;
}