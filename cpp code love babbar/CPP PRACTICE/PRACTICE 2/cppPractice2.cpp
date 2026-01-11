#include<iostream>
using namespace std;

//Q1. WAP to print the fibonacci series (0,1,1,2,3,5,8,13,21,........)
// int main(){
//     int n;
//     cout<<"Enter the number of elements you want to print of fibonacci series: ";
//     cin>>n;

//     int fib0=0;
//     int fib1=1;
//     cout<< fib0<<endl<<fib1<<endl;
//     for(int i=1; i<=n-2; i++){
//        int NUM= fib0+fib1;
//        cout<<NUM<<endl;
//        fib0= fib1;
//        fib1=NUM;
//     }
//     return 0;
// }




//Q2.WAP to check whether a number is prime or not:
// int main(){
//     int num=0;
//     cout<<"Enter the number you want to check whether is prime or not:";
//     cin>>num;

//     bool isPrime=1;
//     for(int i=2;i<num; i++){
//         if((num%i)==0){
//             isPrime=0;
//             break;
//         }
//     }

//     if(isPrime==0){
//         cout<<"Number is not prime";
//     }
//     else{
//         cout<<"Number is prime";
//     }
//     return 0;
// }




//LEETCODE QUESTION 1:
//WAP to find the difference in the product and sum of digits of a number.
// int main(){
//     int n=0;
//     cout<<"Enter the number n you want to print the result for :";
//     cin>>n;

//     int n1= n%10;
//     int n2= (n/10)%10;
//     int n3= (n/100)%10;

//     int prod= (n1)*(n2)*(n3);
//     int sum= (n1)+(n2)+(n3);

//     // method 2
//     //int sum=0, prod=1;
//     // while(n!=0){
//     //     int digit= n%10;
//     //     sum= sum+ digit;
//     //     prod= prod*digit;
//     //     n=n/10;
//     // }

//     int diff= prod-sum;
//     cout<<" The difference in the product and sum of two numbers is "<< diff <<endl;

//     return 0;
// }




//Q- Given a single 32 bit integer x ,return x with its digits reversed.If reversed x causes the value to go outside the signed 32 bit integer range [-pow(2,31),pow(2,31)-1], then return 0.
// #include<cmath>
// int main(){
//     int n;
//     cout<<"Enter the number n :";
//     cin>>n;
//     int ans=0;
//     while(n!=0){
//         int digit=n%10;

//         if((ans>INT_MAX/10)||(ans<INT_MIN/10)){
//             return 0;
//         }
//         ans=ans*10+digit;
//         n=n/10;
//     }
//     cout<<ans;  
// } 




//Q-The compliment of an integer is the integer when you flip all the 1's to 0's and all the 0's to 1's in its binary representation.Given an integer n,return its compliment.
// int main(){
//     int n;
//     cout<<"Enter the integer :";
//     cin>>n;

//     int m=n;
//     int mask=0;

//     while(n!=0){
//         mask=(mask<<1)|1;
//         m=m>>1;
//     }
//     int ans=(~n) & mask;
//     cout<< ans;
//     return 0;

// }




//Q- Make a calculator using switch statements
// int main(){
//     int a,b ;
//     char op;

//     cout<<"Enter a: "<<endl;
//     cin>>a;

//     cout<<"Enter b: "<<endl;
//     cin>>b;

//     cout<<"Enter opertor: "<<endl;
//     cin>>op;

//     switch(op){
//         case '+': cout<< "a+b= "<<a+b<<endl;
//                   break;

//         case '-': cout<< "a-b= "<<a-b<<endl;
//                  break;
                
//         case '*': cout<<"a*b= "<<a*b<<endl;
//                  break;

//         case '/': cout<<"a/b= "<<a/b<<endl;
//                  break;

//         case '%': cout<<"a%b= "<<a%b<<endl;
//                  break;

//         default: cout<<"You used invalid operator!";
//                  break;
//     }
//     return 0;
// }




//Q- WAP uaing function to print the nth term of an Aritmetic Progression whose nth term is written as:(3*n+7)
// int AP(int n){
//     return (3*n+7);
// }

// int main(){
//     int n=0;
//     cout<<"Enter the value of n : "<<endl;
//     cin>>n;
//     int nth_term= AP(n);
//     cout<<"The nth term of the AP is: "<<nth_term<<endl;

// }




//Q- WAP using functions  to calculate the total number of set bits in two number a and b. Example: a=2, b=3, in binary representation total no of 1s are 3 ; so ans is 3;




//Q- WAP to write the fibonacci series using functions