// WAP to print the row wise sum of a 2D array
#include<iostream>
#include<vector>

using namespace std;

int largestRowSum(vector<int>v){
    int max=v[0];
    for(int i=0;i<v.size();i++){
        if(v[i]>max){
            max= v[i];
        }
    }
    return max;
}

void rowWiseSum(int arr[][3],vector<int>& v){
    for(int i=0;i<3;i++){
        int sum =0;
        for(int j=0;j<3;j++){
            sum= sum+arr[i][j];
        }
        v.push_back(sum);
    }
}

int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    //print array
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    vector<int>v;
    rowWiseSum(arr,v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl<<largestRowSum(v);

    return 0;
}