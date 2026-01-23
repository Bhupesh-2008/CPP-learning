# include<iostream>
using namespace std;

inline void getMax(int &a,int&b){
    int ans= (a>b)?a:b;
    cout<<"Max is: "<<ans;
}
int main(){
    int a= 1; 
    int b=3;

    getMax(a,b);
    
    return 0;
}