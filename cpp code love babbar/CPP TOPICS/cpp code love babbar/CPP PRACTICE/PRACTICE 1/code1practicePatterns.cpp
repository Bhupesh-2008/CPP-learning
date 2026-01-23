#include<iostream>
using namespace std;

// Q1-Write a code to print whether a character is lowercase ->a to z  ; uppercase -> A to Z ; digit-> 0 to 9
// int main(){
//     char ch = 'a';
//     cout<<"Enter a character"<<endl;
//     cin>> ch;

//     if( ch>='A'&& ch<='Z'){
//         cout<<"Character is in uppercase"<<endl;
//     }
//     else if( ch>='a'&& ch<='z'){
//         cout<<" Character is in lowercase"<<endl;
//     }
//     else if( ch>='0' && ch<='9'){
//         cout<< "Character is digit."<<endl;
//     }
//     else{
//         cout<<"Character is invalid"<<endl;
//     }
// }




//Q2. WAP to print the sum of all even numbers from 1 to n
// int main(){
//     int n;
//     cout<<"Enter a number n till which you want to print the sum of even numbers";
//     cin>> n;

//     int i=0 ,sum=0;

//     while(i<=n){
//         sum=sum +i;
//         i=i+2;
//     }
//     cout<<"The sum of all even numbers from 1 to "<<n <<" is :"<< sum<<endl;
// }




//Q3. WAP to check whether a number is prime or not.
// int main(){
//     int n;
//     cout<< "Enter a number you want to check whether is prime or not :"<< endl;
//     cin>> n;

//     int i=2;
//     if(i<n){
//         if((n%i)!=0){
//             cout<<"n is prime number."<<endl;
//             i++;
//         }
//         else{
//             cout<< "The number is not prime"<<endl;
//         }
//     }
// }




//Q4. WAP to make a pattern of stars in a rectangle or square with number of rows andf columns from user.
// 11111
// 22222
// 33333
// // 44444
// int main(){
//     int rows=0, columns=0;
//     cout<<"Enter the number of rows"<<endl;
//     cin>>rows;

//     cout<<"Enter the number of columns"<<endl;
//     cin>>columns;

//     for(int i=1;i<=rows; i++){
//         for(int j=1; j<=columns;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
//     return 0;
// }




//Q5 WAP to make the following pattern
// 1234
// 1234
// 1234
// 1234
// int main(){
//     int rows=0, columns=0;
//     cout<<"Enter the number of rows"<<endl;
//     cin>>rows;

//     cout<<"Enter the number of columns"<<endl;
//     cin>>columns;

//     for(int i=1; i<=rows; i++){
//         for(int j=1; j<= columns; j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }




//Q6 WAP to make the following pattern
// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20
// int main(){
//     int rows=0, columns=0;
//     cout<<"Enter the number of rows"<<endl;
//     cin>>rows;

//     cout<<"Enter the number of columns"<<endl;
//     cin>>columns;
//     int count=0;

//     for(int i=1;i<= rows; i++){
//         for(int j=1; j<=columns;j++){
//             count=count+1;
//             cout<<count<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// } 




//Q7-WAP to make the following pattern:
// *
// **
// ***
// ****
// int main(){
//     int n;
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for (int j=1;j<=i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }




//Q8-WAP to make the following pattern:
// 1
// 22
// 333
// 4444
// int main(){
//     int n;
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for (int j=1;j<=i; j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
//     return 0;
// }




//Q9-WAP to make the following pattern:
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// int main(){
//     int rows=0,columns=0;
//     cout<<"Enter the no of columns you want to print :";
//     cin>>columns;
//     cout<<endl;

//     cout<<"Enter the no of rows you want to print :";
//     cin>>rows;
//     cout<<endl;

//     int count=0;
//     for(int i=1; i<=rows; i++){
//         for(int j=1;j<=i;j++){
//             count=count+1;
//             cout<<count<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }




//Q10-WAP to make the following pattern:
// 1
// 2 3
// 3 4 5
// 4 5 6 7
// int main(){
//     int n;
//     cout<<"Enter the value of n:"<<endl;
//     cin>>n;
// // FIRST METHOD USING VALUE VARIABLE
//     // for(int i=1; i<=n; i++){
//     //     int value=i;
//     //     for (int j=1; j<=i; j++){
//     //         cout<<value<<" ";
//     //         value++;
//     //     }
//     //     cout<<endl;
//     // }


// // SECOND METHOD WITHOUT USING VALUE VARIABLE
//     for (int i=1; i<=n;i++){
//         for(int j=0; j<i; j++){
//             cout<< i+j<< " ";
//         }
//         cout<<endl;
//     }
// }




//Q11-WAP to print following pattern:
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// int main(){
//     int n;
//     cout<<"Enter value of n";
//     cin>>n;

// // FIRST METHOD USING VALUE VARIABLE
//     // for (int i=1; i<=n; i++){
//     //     int value= i;
//     //     for(int j=1; j<=i; j++){
//     //         cout<< value<<" ";
//     //         value--;
//     //     }
//     //     cout<<endl;
//     // }


// // SECOND METHOD WITHOUT USING VALUE VARIABLE
//     for (int i=1; i<=n; i++){
//         for (int j=0; j<i; j++){
//             cout<< i-j<< " ";    
//             }
//             cout<<endl;
//     } 
// }




//Q12- WAP to make following pattern:
// A A A
// B B B
// C C C
// int main(){
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         char ch='A'+i-1;
//         for(int j=1; j<=n; j++){
//             cout<<ch;
//         }
//         cout<<endl;
        
//     }
// }




//Q12- WAP to make following pattern:
// A B C
// A B C
// A B C
// int main(){
//     int n;
//     cout<<"Enter value of n : ";
//     cin>>n;

// // METHOD FIRST
//     // for(int i=1; i<=n; i++){
//     //     char ch='A';
//     //     for(int j=1; j<=n; j++){
//     //         ch= ch+j-1;
//     //         cout<<ch<<" "; 
//     //     }
//     //     cout<<endl;
//     // }

// //METHOD SECOND
//     for(int i=1; i<=n; i++){
//          char ch='A';
//         for(int j=1; j<=n; j++){
//             cout<<ch<<" "; 
//             ch++;
//         }
//         cout<<endl;
//     }
// }




//Q12- WAP to make following pattern:
// A B C
// D E F
// G H I
// int main(){
//     int n; 
//     cout<<"Enter the value of n: ";
//     cin>>n;

//     char ch ='A';
//     for(int i=1; i<=n; i++){
//         for(int j=1;j<=n; j++){
//             cout<<ch<<" ";
//             ch= ch+1;
//         }
//         cout<<endl;
//     }
// }




// Q13. WAP to print the following pattern:
// A B C
// B C D
// C D E
// int main(){
    // int n;
    // cout<<"Enter value of n : ";
    // cin>>n;

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
//             char ch='A'+i+j-2;
//             cout<<ch<<" ";
//         }
//         cout<<endl;
//     }
// }




//Q14. WAP to print the following pattern:
// A
// B B
// C C C
// D D D D
// int main(){
    // int n;
    // cout<<"Enter value of n : ";
    // cin>>n;

    // char ch='A';
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
//             cout<<ch<<" ";
//         }
//         ch++;
//         cout<<endl;
// }
// return 0;
// }




//Q14. WAP to print the following pattern:
// A
// B C
// D E F
// G H I J
// int main(){
//     int n;
//     cout<<"Enter value of n : ";
//     cin>>n;

//     char ch='A';
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<ch<< " ";
//             ch++;
//         }
//         cout<<endl;
// }
// return 0;
// }




//Q14. WAP to print the following pattern:
// A
// B C
// C D E
// D E F G
// int main(){
//    int n;
//     cout<<"Enter value of n : ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             char ch='A'+i+j-2;
//             cout<<ch<< " ";
//         }
//         cout<<endl;
// }
// return 0;
// }




//Q14. WAP to print the following pattern:
// D
// C D
// B C D
// A B C D
// int main(){
//  int n;
//     cout<<"Enter value of n : ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         char ch='A'+n-i;
//         for(int j=1; j<=i; j++){
//             cout<<ch<< " ";
//             ch++;
//         }
//         cout<<endl;
// }
// return 0;
// }




//Q15.WAP to print the following pattern:
//    *
//   **
//  ***
// ****
// int main(){
    // int n;
    // cout<<"Enter the number n: ";
    // cin>>n;

//     for(int i=1; i<=n; i++){
//         for(int j=1;j<=n-i; j++){
//             cout<<" ";
//         }
//             for(int k=1;k<=i; k++){
//                 cout<<"*";
//             }
//         cout<<endl;
//     }
//     return 0;
// }




//Q16. WAP to make following pattern
// ****
// ***
// **
// *
// int main(){
//     int n;
//     cout<<"Enter the number n: ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         for (int j=1; j<= n-i+1; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }




//Q17. WAP to make following pattern:
// ****
//  ***
//   **
//    *
// int main(){
//     int n;
//     cout<<"Enter value of n: ";
//     cin>>n;

//     for(int i=1;i<=n; i++){
//         for (int j=1; j<=i-1; j++){
//             cout<<" ";
//         }
//         for( int k=0; k<=n-i; k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }




//Q18. WAP to make following pattern:
// 1111
//  222
//   33
//    4
// int main(){
//     int n;
//     cout<<"Enter value of n: ";
//     cin>>n;

//     int num=1;
//     for(int i=1;i<=n; i++){
//         for (int j=1; j<=i-1; j++){
//             cout<<" ";
//         }
//         for( int k=0; k<=n-i; k++){
//             cout<<num;
//         }
//         cout<<endl;
//         num++;
//     }
//     return 0;
// }




//Q19. WAP to make following pattern:
//    1
//   22
//  333
// 4444
// int main(){
//     int n;
//     cout<<"Enter value of n: ";
//     cin>>n;

//     int num=1;
//     for(int i=1;i<=n; i++){
//         for (int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         for( int k=1; k<=i; k++){
//             cout<<num;
//         }
//         cout<<endl;
//         num++;
//     }
//     return 0;
// }




//Q20. WAP to make the following pattern:
// 1 2 3 4
//   2 3 4 
//     3 4
//       4
// int main(){
//     int n;
//     cout<<"Enter the number n: ";
//     cin>>n;

//     for(int i=1; i<=n; i++){
//         int num=i;
//         for(int j=1; j<=i-1; j++){
//             cout<<" ";
//         }
//         for(int k=1; k<=n-i+1; k++){
//             cout<<num;
//             num++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }




//Q21. WAP to make following pattern:
//       1
//     2 3
//   4 5 6
// 7 8 9 10
// int main(){
//     int n;
//     cout<<"Enter the number n:";
//     cin>>n;

//     int num=1;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<"  ";
//         }
//         for (int k=1; k<=i;k++){
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }




//Q22. WAP to print following pattern:
//    1
//   121
//  12321
// 1234321
// int main(){
//     int n;
//     cout<<"Enter number n: ";
//     cin>>n;

//     for(int i=1; i<=n;i++){
//         for(int j=1; j<=n-i; j++){
//             cout<<" ";
//         }
//         for(int k=1; k<=i; k++){
//             cout<<k;
//         }
//         for(int l=i-1; l>=1; l--){
//             cout<<l;
//         }

//         cout<<endl;
//     }
// }




//Q23. WAP to print the following code:
//                          i  j    *    
// 1 2 3 4 5   /5 4 3 2 1   1  5
// 1 2 3 4 *   /* 4 3 2 1   2       1   
// 1 2 3 * *   /* * 3 2 1   3       2
// 1 2 * * *   /* * * 2 1   4       3
// 1 * * * *   /* * * * 1   5       4
// int main(){
//     int n;
//     cout<<"Enter the number n: ";
//     cin>>n;

//     for(int i=1;i<=n;i++){ // rowes
//         // Pattern 1
//         for (int j=1; j<=n-i+1;j++){
//             cout<<j<<" ";
//         }
//         for(int j=1;j<=i-1; j++){
//             cout<<"* ";
//         }
// // Pattern 2
//         cout<<'/';
//         for(int j=1;j<=i-1; j++){
//             cout<<"* ";
//         }
//          for(int j=n-i+1;j>=1;j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }
