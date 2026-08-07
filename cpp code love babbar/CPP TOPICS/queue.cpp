#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<string> q;

    q.push("Bhupesh");
    q.push("Kumar");
    q.push("Garg");

    cout<<"First Element --> "<<q.front()<<endl;
    q.pop();
    cout<<"First Element --> "<<q.front()<<endl;

    cout<<"Size after pop --> "<<q.size()<<endl;

}