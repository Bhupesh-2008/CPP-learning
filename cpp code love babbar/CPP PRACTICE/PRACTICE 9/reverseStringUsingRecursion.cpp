# include<iostream>
# include<string>

using namespace std;

void reverseString(string s[],int start, int end){
    //base case
    if(start>=end) return;

    swap(s[start],s[end]);
    reverseString(s,start+1,end-1);
}

int main(){
    int size=0;
    cout<<"Enter the size o =f your string :";
    cin>>size;
    string s[50];

    for(int i=0; i<size; i++){
        cin>>s[i];
    }

    reverseString(s,0,size-1);
    for(int i=0; i<size; i++){
        cout<<s[i];
    }

    return 0;

}