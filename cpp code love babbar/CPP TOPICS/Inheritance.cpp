#include<iostream>
using namespace std;


// male class is the inherited class of human class

class Human{

    public:
        int height;
        int age;
        int weight;

    public:
        int getAge(){
           return this->age;
        }
        int setWeight(int w){
            this->weight=w;
        }

};

class Male:public Human{
    public:
        string color;

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    }

};

int main(){
    Male object1;
    
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;
    cout<<object1.color<<endl;

    object1.setWeight(87);
    cout<<object1.weight<<endl;
    object1.sleep();

    return 0;
}