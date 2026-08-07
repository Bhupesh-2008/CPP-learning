#include<iostream>
#include<string>
#include<vector>

using namespace std;

void solve(string str,string output, int index, vector<string>&ans){
    //base case
    if(index>=str.length()){
        if(str.length()>0){
            ans.push_back(output);
        }
        return;
    }

    solve(str,output,index+1, ans);

    char element=str[index];
    output.push_back(element);
    solve(str,output,index+1,ans);
    
}

vector<string>subsequences(string &str){
    vector<string> ans;
    string output= "";
    int index=0;
    solve(str,output,index,ans);
    return ans;
}

int main(){
    string str = "abc";
    vector<string> result = subsequences(str);

    cout << "Subsequences are:";
    for (auto s : result) {
        cout << s << endl;
    }
    return 0;

}