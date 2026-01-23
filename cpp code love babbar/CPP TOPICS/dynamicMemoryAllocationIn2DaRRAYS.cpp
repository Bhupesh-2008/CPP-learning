#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cin>> n;

//     int ** arr= new int *[n];

//     //creating a 2D array
//     for(int i=0; i<n;i++){
//         arr[i]= new int[n];
//     }

//     //taking input
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cin>> arr[i][j];
//         }
//     }

//     //taking output
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<< arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;

// }/


        //                if no of rows and number ogf columns are different
int main(){
    int row;
    cin>>row;

    int col;
    cin>>col;

    int** arr= new int*[row];
    for(int i=0; i<row; i++){
        arr[i]= new int [col];
    }

        //taking input
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>> arr[i][j];
        }
    }

    //taking output
    cout<<endl;  
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //releasing  heap memory
    for(int i=0; i<row; i++){
        delete[] arr[i];
    }
    delete []arr;    

    return 0;
}