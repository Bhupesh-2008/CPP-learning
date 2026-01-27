# include<iostream>
# include<string>

using namespace std;

bool checkPalindrome(string &s,int start, int end){
    if(start>=end) return 1;
    if(s[start]!=s[end]) {
        return 0;
    }
    return checkPalindrome(s,start+1, end-1);
}

int main(){
    string s= "abbcbba";
    cout<<endl;

    bool isPalindrome= checkPalindrome(s,0, s.length()-1);

    if(isPalindrome){
        cout<<"It is a palindrome."<<endl;
    }
    else{
        cout<<"No it is not a palindrome."<<endl;
    }
}