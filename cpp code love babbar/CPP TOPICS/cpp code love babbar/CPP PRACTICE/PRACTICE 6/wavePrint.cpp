# include<iostream>
#include<vector>

using namespace std;

void wavePrint(int arr[][3],vector<int>& v){
    for(int j=0; j<3;j++){
        if(j&1){
            for(int i=2;i>=0;i--){
                v.push_back(arr[i][j]);
            }
        }
        else{
            for(int i=0; i<3;i++){
                v.push_back(arr[i][j]);
            }
        }
    }
}

int main(){
    int arr[3][3];
    vector<int> v;

    for(int i=0;i<3;i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    wavePrint(arr,v);
    for(int i=0; i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}