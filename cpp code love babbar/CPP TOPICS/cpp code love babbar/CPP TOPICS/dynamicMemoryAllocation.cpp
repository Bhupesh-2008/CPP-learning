#include<iostream>
using namespace std;

int getSum(int *arr, int n){
    int s=0; 
    for(int i=0; i<n; i++){
        s+=arr[i];
    }
    return s;
}
int main(){
    // int n;
    // cin>>n;

    // //variable size array
    // int* arr=new int [n];

    // //taking input in array
    // for(int i=0; i<n; i++){
    //     cin>> arr[i];
    // }

    // int ans= getSum(arr,n);
    // cout<<ans;

    return 0;
}