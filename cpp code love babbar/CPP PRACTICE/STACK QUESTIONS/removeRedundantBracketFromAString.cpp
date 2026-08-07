#include <bits/stdc++.h>
using namespace std;

bool isRedundantBrackets(string &s){
    // your logic here
    stack<char>st;
    for(int i=0; i<s.length(); i++){
        char ch= s[i];
        if(ch=='(' || ch=='+' || ch=='-' || ch=='/' || ch=='*'){
            st.push(ch);
        }else{
            //ch ya toh ')' hai or lowerase letter hai
            if(ch==')'){
                bool isRedundant =true;
                while(st.top()!='('){
                    char top= st.top();
                    if(top =='+' || top =='-' || top =='/' || top =='*'){
                        isRedundant=false;
                    }
                    st.pop(); 
                }
                if(isRedundant==true) return true;
            }
        }
    }

    return false;
}

int main(){
    string expr;
    cin >> expr;

    if(isRedundantBrackets(expr)){
        cout<<"Yes\n";
    } else{
        cout<<"No\n";
    }

    return 0;
}