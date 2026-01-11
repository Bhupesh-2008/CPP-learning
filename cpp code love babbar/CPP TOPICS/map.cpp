#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int,string> m;

    m[1]="Bhupesh";
    m[13]="Kumar";
    m[2]="Garg";

    m.insert({5,"Maur"});

    cout<<"Before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<< i.second<<endl;
    }

    cout<<"Finding 13 --> "<<m.count(13)<<endl;

    //m.erase(13);
    cout<<"After erase "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it= m.find(5);

    for(auto i=it; i!= m.end(); i++){
        cout<<(*i).first<<endl;
    }

}