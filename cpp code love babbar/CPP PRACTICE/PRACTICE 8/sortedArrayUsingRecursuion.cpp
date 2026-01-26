# include<iostream>
using namespace std;

bool isSorted(int arr[], int size){
    //base case
    if(size==1 || size==0){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool rem=isSorted(arr+1, size-1);
        return rem;
    }
}

int main(){
    int arr[5]={2,5,7,20,19};
    int size= 5;

    bool ans= isSorted(arr,size);
    cout<<ans;

    return 0;
}