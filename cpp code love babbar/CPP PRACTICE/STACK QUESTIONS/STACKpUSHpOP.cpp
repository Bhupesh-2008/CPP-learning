#include<iostream>

using namespace std;

class TwoStack{
    public:
        int *arr;
         int top1;
         int top2;
        int size;

    TwoStack(int size){
         this->size=size;
         arr= new int[size];
        top1=-1;
        top2=size;
     }
     void push1(int element){
         if(top2-top1>1){
             top1++;
             arr[top1]= element;
         }
         else{
             cout<<"stack overflow"<<endl;
         }
     }
      void push2(int element){
         if(top2-top1>1){
             top2--;
             arr[top2]= element;
         }
         else{
             cout<<"stack overflow"<<endl;
         }
     }
     int pop1(){
         if(top1>-1){
            int ans=arr[top1];
            top1--;
            return ans;
         }
         else{
            return -1;
         }
     }
     int pop2(){
         if(top2<size){
            int ans=arr[top2];
            top2++;
            return ans;
         }
         else{
            return -1;
         }
     }
};

//  class Stack{
//      public:
//          int *arr;
//          int top;
//          int size;

//      Stack(int size){
//          this->size=size;
//          arr= new int[size];
//          top=-1;
//      }
//      void push(int element){
//          if(size-top>1){
//              top++;
//              arr[top]= element;
//          }
//          else{
//              cout<<"stack overflow"<<endl;
//         }
//     }
//     void pop(){
//         if(top>-1){
//             top--;
//         }
//         else{
//             cout<<"stack underflow"<<endl;
//         }
//     }
//     int peek(){
//         if(top>=0 && top<size){
//             return arr[top];
//         }
//         else{
//             cout<<"stack is empty"<<endl;
//             return -1;
//         }

//     }
//     bool isEmpty(){
//         if(top==-1){
//             return true;
//         }
//         else{
//             return false;
//         }
    
//     }
// };

// int main(){
//     Stack s1(4);
//     Stack s2(4);
//     s1.push(5);
//     cout<<"Top element of s1 is "<<s1.peek()<<endl;
//     s2.push(6);
//     cout<<"Top element of s2 is "<<s2.peek()<<endl;

//     s1.pop();
//     cout<<"Top element of s1 is "<<s1.peek()<<endl;
//     s2.pop();
//     cout<<"Top element of s2 is "<<s2.peek()<<endl;

//     return 0;
// }