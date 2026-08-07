#include<bits/stdc++.h>
using namespace std;

int calculateNoOfBrackets(stack<int>&s){
    int open=0;
    int close=0;
    
    while(!s.empty()){
        if(s.top()=='{') open++;
        else close++;

        s.pop();
    }
    return (abs(open-close)/2);
}

int main(){
    string s;
    cin>>s;

    stack<int>st;
    for(int i=0; i<s.length();i++){
        char ch= s[i];
        st.push(ch);
    }

    if(s.length()%2!=0){
        cout<< "-1";
    }
    else{
        int ans= calculateNoOfBrackets(st);
        cout<<ans<<endl;
    }

    return 0;
}