#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the number of rows: ";
    cin>> n;
    cout<<"Enter the number of columns: ";
    cin>>m;

    int arr[n][m];

    cout<<"Enter the values of elements in your matrix:";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int minr=0;
    int maxr=n-1;
    int minc=0;
    int maxc=m-1;
    int count=0;
    int tne=n*m;
    int val=1;
    while(count<tne){
        for(int j=minc;j<=maxc&&count<tne;j++){
           arr[minr][j]=val++;
            count++;
        }
        minr++;
        for(int i=minr;i<=maxr&&count<tne;i++){
            arr[i][maxc]=val++;
            count++;
        }
        maxc--;
        for(int j=maxc;j>=minc&&count<tne;j--){
            arr[maxr][j]=val++;
            count++;
        }
        maxr--;
        for(int i=maxr;i>=minr&&count<tne;i--){
            arr[i][minc]=val++;
            count++;
        }
        minc++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}