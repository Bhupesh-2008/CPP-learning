# include<iostream>
# include<vector>

using namespace std;

int main(){
    int r, c;
    cin>>r;

    int **arr= new int*[r];

    for(int i=0; i<r; i++){
        arr[i]= new int [i+1];
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<i+1; j++){
            cin>> arr[i][j];
        }
    }
    cout<<endl;  
    for(int i=0; i<r; i++){
        for(int j=0; j<i+1; j++){
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
}