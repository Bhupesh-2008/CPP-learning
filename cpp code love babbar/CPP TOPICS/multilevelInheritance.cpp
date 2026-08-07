#include<iostream>
using namespace std;

class Animal{
    public:
        int age;
        int weight;

    public:
        void speak(){
            cout<<"Speaking "<<endl;
        }
};

class Dog:public Animal{

};

class Cat: public Dog {

};

class Tiger:public Cat{

};

int main(){
    Dog d1;
    d1.speak();

    Cat c1;
    c1.speak();

    Tiger t1;
    t1.speak();

    return 0;
}