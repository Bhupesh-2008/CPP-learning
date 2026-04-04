#include <bits/stdc++.h>
using namespace std;

bool knows(vector<vector<int>>&M,int a, int b,int n){
    if(M[a][b]==1) return true;
    else return false;
}

int findCelebrity(vector<vector<int>>&M,int n) {
    // Your logic goes here
    stack<int>s;
    for(int i=0; i<n; i++){
        s.push(i);
    }

    while(s.size()!=1){
        int x=s.top();
        s.pop();
        int y= s.top();
        s.pop();

        if(knows(M,x,y,n)){
            s.push(y);
        }else{
            s.push(x);
        }
    }

    int candidate= s.top();

    bool rowCheck= false;
    int zercount=0;
    for(int i=0; i<n; i++){
        if(M[candidate][i]==0){
            zercount++;
        }
    }

    if(zercount==n) rowCheck=true;
    
    bool colCheck=false;
    int oneCount=0;
    for(int i=0; i<n; i++){
        if(M[i][candidate]==1){
            oneCount++;
        }
    }
    if(oneCount==n-1) colCheck=true;

    if(rowCheck==true && colCheck==true) return candidate;
    else return -1;
}

int main(){
    int n;
    cin>>n;  
    vector<vector<int>> M(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>M[i][j];  
        }
    }

    int celeb=findCelebrity(M,n);
    cout<<celeb<<endl;

    return 0;
}

