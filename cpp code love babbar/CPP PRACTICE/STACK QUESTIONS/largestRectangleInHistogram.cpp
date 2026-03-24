#include<bits/stdc++.h>
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

int largestRectangleArea(vector<int>&height){
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

int main(){
    int n;
    cin>>n;

    vector<int>heights(n);
    for (int i=0;i<n;i++){
        cin>>heights[i];
    }

    int result =largestRectangleArea(heights);

    cout<<result<<endl;
    return 0;
}
