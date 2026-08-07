#include<iostream>
using namespace std;
bool check(int n){
    if(n==1|| n==0){
        return 0;
    }
    for(int i=2; i<n-1;i++){
            if(n%i ==0){
                return 0;
            }
        }
        return 1;
}

int main(){
    // int num=3;
    // cout<<num<<endl;
    // //Address pf operator -->&
    // cout<<"Address of num is "<<&num<<endl;
    // int *ptr=&num;
    // cout<<*ptr;

    // return 0;

    int n=1;
    cout<< check(n);
    
}