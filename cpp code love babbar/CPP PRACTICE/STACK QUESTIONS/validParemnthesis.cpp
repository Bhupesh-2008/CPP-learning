#include <bits/stdc++.h>
using namespace std;

bool matches(char top, char ch){
    if(ch==')'&& top=='(' || ch=='}' && top=='{' || ch==']' && top=='['){
        return true;
    }
    else return false;
}

bool isValidParenthesis(string expression){
    // your logic here
    stack<char>s;
    for(int i=0; i<expression.length(); i++){
        char ch= expression[i];

        //if opening bracket , stack pusjh
        //if closing bracket stck top check and pop
        if(ch=='('|| ch=='{'|| ch=='['){
            s.push(ch);
        }else{
            //for closuing bracket
            if(!s.empty()){
                char top= s.top();
                if( matches(top, ch)){
                    s.pop();
                }else{
                    return false;
                }
            }else{
                return false;
            }
        }
    }

    if(s.empty()) return true;
    else return false;
}

int main(){
    string expr;
    cin>>expr;

    if(isValidParenthesis(expr)){
        cout<<"YES\n";
    } else{
        cout<<"NO\n";
    }
    
    return 0;
}