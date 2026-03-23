#include <bits/stdc++.h>
using namespace std;

stack<int> deleteMiddleIterative(stack<int> &s,int n){
    if(s.empty() || n==0) return s;
    int k =n/2;
    stack<int>temp;
    for (int i=0;i<k;++i){
        temp.push(s.top());
        s.pop();
    }
    
    if(!s.empty()) s.pop();
    while(!temp.empty()){
        s.push(temp.top());
        temp.pop();
    }

    stack<int> ans;
    while(! s.empty()){
        ans.push(s.top());
        s.pop();
    }
    return ans;

}

void solve( stack<int>&inputstack,int count, int size){
    //base case
    if(count==size/2 ){
        inputstack.pop();
    }
    int num= inputstack.top();
    inputstack.pop();

    //recursive call
    solve(inputstack, count+1, size);

    inputstack.push(num);
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

    s= deleteMiddleIterative(s,n);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<'\n';
    return 0;
}