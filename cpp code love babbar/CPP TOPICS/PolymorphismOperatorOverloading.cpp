# include<iostream>
using namespace std;

class A{
    public:
        
};

class B: public A{
    public:
        int a;
        int b;

    public:
        int add(){
            return a+b;
        }

        void operator+(B &obj){
            int val1= this-> a;
            int val2= obj.a;
            cout<<"Output:"<<val2- val1<<endl;
        }

        void operator() (){
            cout<<"Main bracket hu"<<endl;
        }
};

int main(){
    B obj1,obj2;

    obj1.a=4;
    obj2.a=7;

    obj1+obj2;
    obj1();

    return 0;
}