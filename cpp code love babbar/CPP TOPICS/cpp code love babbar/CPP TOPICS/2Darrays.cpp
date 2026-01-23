#include<iostream>
using namespace std;

int findTarget(int arr[][4], int target){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){

    //creating a 2d array and initialising it in starting
    int arr[3][4];
    //int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
   // int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    //taking input --> row wise:
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++) {
            cin>> arr[i][j];
        } 
    }
 
    //taking input --> column wise
    // for(int i=0;i<4; i++){
    //     for(int j=0; j<3; j++){
    //         cin>>arr[j][i];
    //     }
    // }

    //giving output
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int target=0;
    cout<<"Enter the element you want to search : ";
    cin>>target;

    if(findTarget(arr,target)==1){
        cout<<"Found";
    }
    else{
        cout<<"Not found";
    }

}