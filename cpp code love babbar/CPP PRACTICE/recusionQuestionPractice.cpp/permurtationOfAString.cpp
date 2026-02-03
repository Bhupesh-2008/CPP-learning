#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

void solve(vector<int>nums, vector<vector<int>>&ans, int index){
    //base case
    if(index>= nums.size()){
        ans.push_back(nums);
        return;
    }

    for(int i=index; i<nums.size();i++){
        swap(nums[index],nums[i]);
        solve(nums,ans,index+1);
        swap(nums[index],nums[i]); //backtrack
    }
}

vector<vector<int>> permute(vector<int>&nums ){
    vector<vector<int>> ans;
    // string output="";
    int index=0;
    solve(nums,ans, index);

    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of vector: ";
    cin>>n;

    vector<int>nums(n,0);
    cout<<"Enter the vector: ";
    for(int i=0; i<n;i++){
        cin>>nums[i];
    }

    vector<vector<int>>sol=permute(nums);

    for(int i=0;i<sol.size();i++){
        for(int j=0; j<sol[i].size(); j++){
            cout<<sol[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}