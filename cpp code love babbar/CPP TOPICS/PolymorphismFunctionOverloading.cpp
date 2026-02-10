#include<iostream>

using namespace std;

class A{
    public:
        void sayHello(){
            cout<<"Hello bhai"<<endl;
        }

        int sayHello(string name,int n){
            cout<<"Hello "<<name<<endl;
            return n;
        }

        int sayHello(char name){
            cout<<"Hello "<<name<<endl;
            return 1;
        }

        void sayHello(string name){
            cout<<"Hello "<<name<<endl;
        }
};

int main(){
    A obj;
    obj.sayHello();

    return 0;
}