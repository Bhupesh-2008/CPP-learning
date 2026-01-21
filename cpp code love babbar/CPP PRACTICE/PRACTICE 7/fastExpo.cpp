//You are given with three integers x,m,n and your task is to find (x^n)%m

#include <iostream>
using namespace std;

int modularExponentiation(int x,int n, int m){
    int res=1;

    while(n>0){
        if(n&1){
            res=(1LL* (res)*(x)%m)%m;
        }
        x=(1LL* (x)%m*(x)%m)%m;
        n=n>>1;
    }
    return res;
}

int main(){

}