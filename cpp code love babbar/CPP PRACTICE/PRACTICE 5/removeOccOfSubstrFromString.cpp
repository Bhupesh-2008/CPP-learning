//You are given with a substringand its main string and you have to remove all the possible sets of substrings from the main string and return back the answer string
//EG: Input= 'daabcbaabcbc' part= 'abc'   Output='dab'

#include <iostream>
# include<string>

using namespace std;

string removeSubString(string s,string p){
    while(s.length()!=0 && s.find(p)< s.length()){
        s.erase(s.find(p),p.length());
    }

    //Another approach
    // while(s.find(p)!= string::npos){
    //     s.erase(s.find(p),p.length());
    // }
    return s;
}

int main(){

    string s, p;
    getline(cin,s,'|');
    getline(cin,p,'|');

    cout<<removeSubString(s,p)<<endl;

    return 0;
}