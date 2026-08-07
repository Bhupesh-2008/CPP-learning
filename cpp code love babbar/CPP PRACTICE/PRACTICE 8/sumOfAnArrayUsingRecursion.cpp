#include<iostream>
using namespace std;

// int sumArray(int arr[], int size, int s){
//     //base case
//     if(size==0) return s;
    
//     //recursive statement
//     s+= arr[0];
//     int ans= sumArray(arr+1, size-1, s);

//     return ans;
// }
                                                
                                     // Better function approach
int sumArray(int arr[], int size){
    //base case
    if(size==0) return 0;
    
    //recursive statement
    return arr[0]+sumArray(arr+1,size-1);
}

int main(){
    int arr[5];
    
    cout<<"Enter the elements of your array";
    for(int i=0; i<5;i++){
        cin>>arr[i];
    }
    
    int sum= sumArray(arr, 5);
    cout<<"sum of array elements is:"<<sum;

    return 0;
}