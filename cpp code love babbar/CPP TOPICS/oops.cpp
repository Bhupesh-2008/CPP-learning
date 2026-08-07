#include<iostream>
#include<cstring>
using namespace std;

class Hero{
    // properties
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;

    Hero(){
        cout<<"Constructor called "<<endl;
        name=new char[100];
    }

    Hero(int health){
        this->health=health;
    }

    Hero(int health,char level){
        this->health=health;
        this->level= level;
    }

    //copy constructor
    Hero(Hero& temp){

        char *ch= new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;

        cout<<"Copy constructor called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }


    void print(){
        cout<<"["<<" Name: "<<this->name<<"   ";
        cout<<"Health: "<< this->health<<"   ";
        cout<<"Level: "<<this->level<<" ]";
        cout<<endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health=h;
    }

    void setLevel(char l){
        level=l;
    }

    void setName(char name[]){
        strcpy(this->name, name);
    }

    static int random(){
    return timeToComplete;
    }

    //destructor
    ~Hero(){
        cout<<"Destructor called"<<endl;
    }

};

int Hero::timeToComplete=6;

int main(){ 

    cout<<Hero:: timeToComplete<<endl; //recommended
    cout<<Hero::random()<<endl;

    // Hero a;

    // cout<<a.timeToComplete<<endl; // not recommended as time to complete is a static member

    // Hero b;
    // b.timeToComplete=10;
    // cout<<a.timeToComplete<<endl;
    // cout<<b.timeToComplete<<endl;




    // //staticaly allocated
    // Hero a; 
    // //automatically destructor called for static allocaton

    // //dynamic allocation
    // Hero *b= new Hero();
    // //manually destructor called for dynamic allocation
    // delete b;
                    





//     Hero hero1;
//     hero1.setHealth(13);
//     hero1.setLevel('B');
//     char name[7]="Babbar";
//     hero1.setName(name);

//     //hero1.print();

//     //using default copy contructor
//     Hero hero2(hero1);
//    // hero2.print();
//     //Hero hero2= hero1;

//     hero1.name[0]='G';
//     hero1.print();                         
//     hero2.print();

//     hero1=hero2;
//     hero1.print();
//     hero2.print();


    // Hero Suresh(70,'c');
    // Suresh.print();

    // //Copy constructor call hogaya joki class mein inbuilt hota hai aur apne aap ko copy kr leta hai
    // Hero Ritesh (Suresh);
    // Ritesh.print();




//     //creation of object

//     //static allocation
//     Hero h1(10);
//     cout<<"Address of h1: "<<&h1<<endl;
//     cout<<"Level is "<<h1.level<<endl;
//     cout<<"Health is "<< h1.getHealth()<<endl;

//     Hero temp(22,'c');
//     temp.print();


//     //dynamic allocation
//     Hero *b= new Hero;
//     b->setHealth(70);
//     b->setLevel('b');
//     cout<<"Level is "<<(*b).level<<endl;
//     cout<<"Health is "<< (*b).getHealth()<<endl;

//     //alternate calling of dynamic variable
//     cout<<"Level is "<<b->level<<endl;
//     cout<<"Health is "<< b->getHealth()<<endl;

    // cout<<"H1 health is : "<<h1.getHealth()<<endl;
    // h1.setHealth(76); //using setter
    // h1.level= 'B';

    // cout<<"Size: "<<sizeof(Hero)<<endl;
    // cout<<"Health of h1 is : "<< h1.getHealth()<<endl; //using getter
    // cout<<"Level of h1 is : "<< h1.level<<endl;

    return 0;
}