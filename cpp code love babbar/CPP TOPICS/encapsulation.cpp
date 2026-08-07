#include<iostream>
using namespace std;

//ENCAPSULATION: creating of objects or functions in a class
class Student{

    private:
        string name;
        int age;
        int height;

    public:
        int getAge(){
            return this->age;
        }
};



int main(){

    Student s1;
    cout<<"Everything is fine. ";

    return 0;
}