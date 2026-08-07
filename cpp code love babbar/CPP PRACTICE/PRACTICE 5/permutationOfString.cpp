// You are given with two strings and you have to return true if the  permutation of s1 exists in string s2 in any order otherwise return false
#include<iostream>
#include<string>

using namespace std;
//                     only works for two charactrs in string 1
// bool permutation(string s1, string s2,string s3){
//     return (s2.find(s1)!= string::npos)||(s2.find(s3)!= string::npos);
// }

// string reverseString(string s1){
//     int s=0;
//     int e= s1.length()-1;

//     while(s<e){
//         swap(s1[s++],s1[e--]);
//     }

//     return s1;
// }

// int main(){

//     string s1,s2;
//     getline(cin,s1,'|');
//     getline(cin,s2,'|');

//     string s3= reverseString(s1);
//     cout<<permutation(s1,s2,s3)<<endl;
//     return 0;
// }




//                    Approach for any type of permutation

bool checkEqual(int a[26], int b[26]){
    for(int i=0; i<26;i++){
        if (a[i]!= b[i]){
            return 0;
        }
        return 1;
    }
}

bool checkInclusion(string s1, string s2){
    int count1[26]={0};
    for(int i=0;i<s1.length();i++){
        int index=s1[i]-'a';
        count1[index]++;

    }

    //traverse s2 string in window of size s1 length and compare
    int i=0;
    int windowsSize=s1.length();
    int count2[26]={0};

    //rnning for first window
    while(i<windowsSize && i<s2.length()){
        int index= s2[i]-'a';
        count2[index]++;
        i++;
    }

    if (checkEqual(count1,count2))
    return 1;

    //aage windows process karo
    while(i<s2.length()){
        char newChar= s2[i];
        int index= newChar-'a';
        count2[index]++;

        char oldChar = s2[i- windowsSize];
        index= oldChar-'a';
        count2[index]--;
        i++;

        if (checkEqual(count1,count2))
        return 1;
    }
    return 0;
}