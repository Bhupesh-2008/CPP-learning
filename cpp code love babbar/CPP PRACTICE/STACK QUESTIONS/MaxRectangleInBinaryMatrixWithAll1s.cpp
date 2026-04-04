#include <bits/stdc++.h>
using namespace std;

vector<int> nextSmallerElement(vector<int>v, int n){
    stack<int>s;
    s.push(-1);

    vector<int>ans(v.size());
    for(int i=v.size()-1; i>=0; i--){
        while(s.top()!=-1 && v[s.top()]>=v[i]) s.pop();

        ans[i]=s.top();
        s.push(i);
    }
    return ans;
}

vector<int> prevSmallerElement(vector<int>v, int n){
    stack<int>s;
    s.push(-1);

    vector<int>ans(v.size());
    for(int i=0; i<v.size()-1;i++){
        while(s.top()!=-1 && v[s.top()]>=v[i]) s.pop();

        ans[i]=s.top();
        s.push(i);
    }
    return ans;
}

int largestRectangleArea(vector<int>&height,int m){
    int n= height.size();

    vector<int>next(n);
    next= nextSmallerElement(height,n);

    vector<int>prev(n);
    prev= prevSmallerElement(height,n);
    int area= INT_MIN;
    for(int i=0; i<n ;i++){
        int l= height[i];

        if(next[i]==-1) next[i] = n;
        int b= next[i]-prev[i]-1;
        int newArea=l*b;
        area= max(area, newArea);
    }
    return area;
}

int maximalRectangle(vector<vector<int>> &matrix) {
    int n= matrix.size();
    int m= matrix[0].size();
    //compute area for first row
    int area= largestRectangleArea(matrix[0],m);

    for(int i=1; i<n; i++){
        for(int j=0; j<m; j++){
            //row update: by adding previous row's value
            if(matrix[i][j]!=0){
                matrix[i][j]= matrix[i][j]+matrix[i-1][j];
            }else matrix[i][j]=0;
        }

        //entire row is updated now
        area= max(area, largestRectangleArea(matrix[i],m));
    }

    return area;
}

int main(){
    int n, m;
    cin>>n>>m;

    vector<vector<int>> matrix(n,vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }

    cout<<maximalRectangle(matrix)<<endl;
    return 0;
}
