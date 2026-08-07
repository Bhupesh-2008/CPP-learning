#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5]={-8,2,3,-6,10};

    deque<int>dq;
    int k=0; cin>>k; 

    vector<int>a;
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            dq.push_back(i);
        }
    }
    if(dq.size()>0){
        a.push_back(arr[dq.front()]);
    }else{
        a.push_back(0); 
    }

    for(int i=k ; i<5; i++){
        if(!dq.empty() && i-dq.front()>=k) dq.pop_front();
        if(arr[i]<0) dq.push_back(i);

        if(dq.size()>0){
            a.push_back(arr[dq.front()]);
        }
        else a.push_back(0);
    }

    for(int i=0; i<4; i++) cout<<a[i]<<" ";
}