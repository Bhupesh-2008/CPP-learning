#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    string str= "bhupesh";
    stack<char>a;

    for(int i=0; i<str.length(); i++){
        char ch= str[i];
        a.push(ch);
    }

    string ans="";
    while(!a.empty()){
        char ch= a.top();
        ans.push_back(ch);
        a.pop();
    }

    cout<< "answer is: "<<ans<<endl;
    return 0;
}