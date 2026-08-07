# include<iostream>
#include<vector>

using namespace std;

void quickSort(vector<int>&v,int s,int e){
    //base case
    if(s>=e) return ;

    //counting no of elements greater than pivot element(v[0])
    int cnt=0;
    for(int i=s+1; i<=e;i++){
        if(v[i]<v[s]){ 
            cnt++;
        }
    }

    //placing pivot element at its right position
    int pivotIndex = s+cnt;
    swap(v[s],v[pivotIndex]);

    //satisfying the condition of putting elements on right sie of pivot as less than pivot and right side to be greater than pivot
    int left=s, right=e;
    while(left<pivotIndex && right>pivotIndex){
        
        while(v[left]<v[pivotIndex] ){
            left++;
        }
        while(v[right]>v[pivotIndex]){
            right--;
        }
        if(s<pivotIndex && e>pivotIndex){
            swap(v[left],v[right]);
            left++;
            right--;
        }
    }

    //abhi dono side ke arrays ko sort kro using recursion of this function
    quickSort(v,s,pivotIndex-1); // left part sort
    quickSort(v,pivotIndex+1,e); //right part sort

}

int main(){
    int n=0;
    cout<<"Enter the size of your vector: ";
    cin>>n;
    vector<int> v(n,0);
    cout<<"Enter the elements in your vector:";
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    quickSort(v,0,n-1);

    for(int i=0; i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;

}