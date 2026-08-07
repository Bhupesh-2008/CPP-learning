#include<iostream>
#include<vector>

using namespace std;

void solve(string digit, string output,vector<string>&ans, int index,string mapping[]){

    //base case
    if(index>=digit.length()){
        ans.push_back(output);
        return;
    }

    int number= digit[index]-'0';
    string value= mapping[number];
    for(int i=0; i<value.length();i++){
        output.push_back(value[i]);
        solve(digit,output,ans,index+1, mapping);
        output.pop_back();
    }
    

}

vector<string> letterCombinations(string digits){
    vector<string>ans;
    string output;
    int index=0;

    if(digits.length()==0){
        return ans;
    }

    string mapping[10]={"","", "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(digits,output,ans,index,mapping);
    return ans;
}

int main(){
    cout<<"Enter your number:";
    string s;
    cin>>s;

    vector<string>sol=letterCombinations(s);
    for(int i=0; i<sol.size(); i++){
        cout<<"'"<<sol[i]<<"'"<<" ";
    }

    return 0;
}