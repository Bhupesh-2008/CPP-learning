# include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key){
    // baseCase
    if(size==0) return 0;

    if(arr[0]==key) return 1;
    else{
        return linearSearch(arr+1, size-1, key);
    }
}

int main(){
    int arr[6];
    cout<<"Enter the elements of your array: ";

    for(int i=0; i<6; i++){
        cin>>arr[i];
    }
    int key=0;
    cout<<"Enter the key element :";
    cin>>key;

    bool ans= linearSearch(arr, 6, key);
    cout<<ans;

    return 0;
}