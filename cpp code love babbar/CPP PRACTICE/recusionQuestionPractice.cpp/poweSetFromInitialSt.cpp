# include<iostream>
#include<vector>

using namespace std;

void solve(vector<int>v, vector<int>output, int index, vector<vector<int>>&ans){
    //base case
    if(index>= v.size()){
        ans.push_back(output);
        return ;
    }

    //exclude
    solve(v,output,index+1, ans);

    //include
    int element= v[index];
    output.push_back(element);
    solve(v,output,index+1,ans);
}

vector<vector<int>> subsets(vector<int>&v){
    vector<vector<int>> ans;
    vector<int> output;
    int index=0; 
    solve(v,output,index, ans);
    return ans;
}

int main(){
    int n=0;
    cout<<"Enter the size of vector:";
    cin>>n;

    vector<int>v(n,0);
    cout<<"Enter elements of your array:";
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    vector<vector<int>>ans=subsets(v);
    cout << "Subsets are:\n";
    for(auto subset : ans){
        cout << "{";
        for(auto x : subset){
            cout << x << " ";
        }
        cout <<"},";
    }

    
    return 0;
}