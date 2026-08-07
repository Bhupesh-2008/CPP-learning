//search a 2d matrix 
#include<iostream>
# include<vector>

using namespace std;

bool binarySearch(vector<vector<int>>& matrix, int target){
    int row= matrix.size();
    int col= matrix[0].size();
    int start=0;
    int end= row*col-1;
    int mid= start+(end-start)/2;

    while(start<end){
        int element= matrix[mid/col][mid%col];
        if(element==target){
            return 1;
            break;
        }
        if(element>target){
            end= mid-1;
        }
        if(element<target){
            start= mid+1;
        }
        mid= start+(end-start)/2;
    }
    return 0; 
}

 int main(){
    int rows=3, cols=4;
    vector<vector<int>> matrix(rows, vector<int>(cols));

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>> matrix[i][j];
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<< matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    int target=0;
    cout<<endl<<" Enter the target value which you want to find :"; 
    cin>> target;

    cout<<binarySearch(matrix, target);
    return 0;
 }