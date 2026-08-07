#include<bits/stdc++.h>
using namespace std;

int getMin(stack<int>&s, int& mini){
    if(s.empty()){
        cout<<"Stack underflow"<<endl;
        return mini;
    }
    int curr= s.top();
    s.pop();

    if(curr>=mini){
        return mini;
    }else{
        int prevmini= 2*mini-curr;
        mini=prevmini;
        return mini;
    }
}

int main(){
    int n=0;
    cin>>n;

    vector<int>v(n);
    stack<int>s;

    int mini=INT_MAX;
    for(int i=0; i<n; i++){
        cin>>v[i];
        int curr=v[i];

        if(s.empty()){
            s.push(curr);
            mini= curr;
        }else{
            if(curr>=mini) s.push(curr);
            else {
                s.push(2*curr-mini);
                mini= curr;
            }
        }
    }

    cout<<getMin(s,mini)<<endl;
    cout<<getMin(s,mini)<<endl;
    cout<<getMin(s,mini)<<endl;
    cout<<getMin(s,mini)<<endl;
    cout<<getMin(s,mini)<<endl;
    cout<<getMin(s,mini)<<endl;

    return 0;

}