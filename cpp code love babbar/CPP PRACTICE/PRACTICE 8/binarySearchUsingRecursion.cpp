# include<iostream>
# include<algorithm>
using namespace std;

bool binarySearch(int arr[], int s, int e, int key){
    if(s>e) return 0;
    int mid= s+(e-s)/2;
    if(arr[mid]==key) return 1;
    if(arr[mid]<key) {
        return binarySearch(arr, mid+1, e,key);
    }
    else{
        return binarySearch(arr, s, mid-1, key);
    }
}

int main(){
    int arr[7];
    cout<<"Enter the elements of your array: ";

    for(int i=0; i<7; i++){
        cin>>arr[i];
    }

    sort(arr,arr+7);
    int key=0;
    cout<<"Enter the key element :";
    cin>>key;

    bool ans=binarySearch(arr,0,6,key);
    cout<<ans;

    return 0;
}