#include<iostream>
#include<vector>
#include<string>

using namespace std;

void reverseString(string &s,int start){
    //base case
    int n= s.length();
    
    if(start>=n-1-start) return;

    swap(s[start],s[n-1-start]);
    reverseString(s,start+1);
}

int main(){
    int size=0;
    cout<<"Enter the no of string :";
    cin>>size;
    vector<string>s(size);

    for(int i=0; i<size; i++){
        cin>>s[i];
        reverseString(s[i],0);
    }


    for(int i=0; i<size; i++){
        cout<<s[i]<<" ";
    }

    return 0;

}