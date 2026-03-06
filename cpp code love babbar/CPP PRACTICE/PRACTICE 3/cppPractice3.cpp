#include<iostream>
#include<stdlib.h>
using namespace std;

//Q- WAP to print the maiximun and minimum of an array where user will input the array values and size
// int printMin(int arr[],int size){
//     int min= INT_MAX;

//     for (int i=0;i<size;i++){
//         if (arr[i]<min){
//             min=arr[i];
//         }
//     }
//     return min; 
// }

// int printMax(int arr[],int size){
//     int max= INT_MIN;

//     for (int i=0;i<size;i++){
//         if (arr[i]>max){
//             max=arr[i];
//         }
//     }
//     return max; 
// }
// int arr[100]={0};

// int main(){
//     int n;
//     cout<<"Enter the value of number of elements in the array ";
//     cin>>n;

//     if (n > 100000) {
//     cout << "Size exceeds maximum limit of 100." << endl;
//     return 1;
// }

    // for (int i=0;i<n;i++){
    //     cin>>arr[i];
    // }

    // cout<<"Size of array is "<<n<<endl;
    // cout<<"Elements in the array are ";
    
    // for (int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

//     cout<<endl<<"Value of minimum element in the given array is:"<<printMin(arr,n)<<endl; 
//     cout<<"Value of maximum element in the given array is:"<<printMax(arr,n)<<endl;
//     return 0;

// }



//Q-2.WAP to print the sum of all elements in an array
// int printSum(int arr[],int size){
//     int sum=0;
//     for(int i=0;i<size;i++){
//         sum+=arr[i];
//     }
//     return sum;
// }

// int main(){
//     int n=0;
//     int arr[1000];

//     cout<<"Enter the number of elements in array: ";
//     cin>>n;

//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     cout<<"Size of array is "<<n<<endl;
//     cout<<"Elements in the array are ";
    
//     for (int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     if (n <= 0 || n > 1000) {
//     cout << "Invalid array size." << endl;
//     return 1;
// }
//     cout<<endl<<"The sum of all values in the array is "<<printSum(arr,n)<<endl;
// }



//Q3. WAP to swap the alternate elements of an array 
// void printArray(int arr[],int size){
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// void swapArray(int arr[],int size){
//     for(int i=0; i<size;i+=2){
//         if(i+1<size){
//         swap(arr[i],arr[i+1]);
//         }
//         else{
//             break;
//         }
//     }
// }
// int main(){
//     int even[6]={1,58,64,24,3,53};
//     int odd[5]={23,545,25,53,585};

//     swapArray(even,6);
//     printArray(even,6);

//     cout<<endl;
//     swapArray(odd,5);
//     printArray(odd,5);
// }



// WAP to print the sum of elements of an array  when the array elements are taken the input from user
// void printArray(int arr[],int size){
//     cout<<"Enter the elements of your array : ";
//     for(int i=0;i<size; i++){
//         cin>>arr[i];
//     }

//     cout<<"Your array is ";
//     for(int i=0;i<size;i++){
//         cout<< arr[i]<<" ";
//     }
// }

// void sum(int arr[],int size){
//     int sum=0;
    
//     for(int i=0;i<size;i++){
//         sum+=arr[i];
//     }
//     cout<<endl;
//     cout<<"The sum of elements of the above array is "<<sum;
// }

// int main(){
//     int size;
//     int arr[300];
//     cout<<"Enter the size of you want to get the sum of :";
//     cin>>size;

//     printArray(arr,size);
//     sum(arr,size);

//     return 0;
// }




//WAP to search whwther a specific element is present in your array or not ?
// void printArray(int arr[],int size){
//     cout<<"Enter the elements of the array : ";
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }

//     cout<<"The elements of your array are ";
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// bool search(int arr[],int size,int element){
//     for(int i=0;i<size;i++){
//         if(arr[i]==element){
//             return 1;
//         }
//     }
//     return 0;
// }

// int main(){
//     int size=0,element =0;
//     int arr[200]={0};

//     cout<<"Enter the size of array you want: ";
//     cin>>size;

//     printArray(arr,size);

//     cout<<endl;
//     cout<<"Enter the element you want to search in this array :";
//     cin>>element;

//    bool found= search(arr,size,element);
//     if (found){
//         cout<<"Yes "<<element<<" is present in the array";
//     }
//     else{
//         cout<<"No "<<element<<" is not present in the array";
//     }

//     return 0;
// }




//WAP to reverse an array when array is input by the user
// void printArray(int arr[], int size){
//     cout<<"Enter the elements of the array: ";
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }

//     cout<<"The array is ";
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// void reverseArray(int arr[],int size){
//     for(int i=0;i<size/2; i++){
//         swap(arr[i],arr[size-i-1]);
//     }
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int arr[200]={0};
//     int size;

//     cout<<"Enter the size of the array :";
//     cin>>size;

//     printArray(arr,size);
//     cout<<endl;
//     cout<<"----- Reverse Array -----"<<endl;

//     reverseArray(arr,size);
// }



//WAP to swap the alternate elements of an array 
// Input: {1 32 3 5 6 8}
//Output: {32 1 5 3 8 6}
// void printArray(int arr[], int size){
//     cout<<"Enter the elements of the array: ";
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }

//     cout<<"The array is ";
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// void swapArray(int arr[],int size){
//     if((size %2)==0){
//         for(int i=0;i<size; i+=2){
//             swap(arr[i],arr[i+1]);
//         }
//     }else{
//         for (int i=0;i<(size-1); i+=2){
//             swap(arr[i],arr[i+1]);
//         }
//     }
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int arr[200]={0};
//     int size;

//     cout<<"Enter the size of the array :";
//     cin>>size;

    // printArray(arr,size);
    // cout<<endl;
//     cout<<"----- Swapped Array -----"<<endl;

//     swapArray(arr,size);
// }




//WAP to find a unique element in array of 2m+1 elements where m elements are present twice and one element is present once
// void printArray(int arr[], int size){
//     cout<<"Enter the elements of the array: ";
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }

//     cout<<"The array is ";
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// void findUniqueElement(int arr[],int size){
//     int g=0;

//     for(int i=0;i<size;i++){
//         g=g^arr[i];
//     }
//     cout<<"The unique element in the array is "<<g;
// }

// int main(){
//     int arr[200]={0};
//     int size=0;

//     cout<<"Enter the number of elements in the array (0 -(2m+1)) : ";
//     cin>>size;

//     printArray(arr,size);
//     cout<<endl;

//     findUniqueElement(arr,size);

//     return 0;
// }


//            ****************************************************************
// WAP in which you are given an array of integers arr,return true if number of occurences of each value in the array is unique,otherwise false.
// void printArray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     cout<<"Your array is ";
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int arr[300]={0};
//     int size=0;

//     cout<<"Enter the size of array: ";
//     cin>>size;

//     cout<<"Enter the elements of your array: ";
//     printArray(arr,size);
// } 
//                     **************************************************************************



//WAP to find a single duplicate element in an array of size N where [1,N-1] elements are present at least once and one element is present single time
// void printArray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     cout<<"Your array is ";
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// void findDuplicate(int arr[],int size){
//     cout<<endl<<"The duplicate element is ";

//     int g=0;
//     for(int i=0;i<size;i++){
//             g=g^arr[i];
//     }

//     for(int i=1;i<size;i++){
//         g=g^i;
//     }
//     cout<<g;
// }

// int main(){
//     int arr[300]={0};
//     int size=0;

//     cout<<"Enter the size of array: ";
//     cin>>size;

//     cout<<"Enter the elements of your array: ";
//     printArray(arr,size);

//     findDuplicate(arr,size);
// } 



// WAP to find all the duplicates in an array in which every unique element is written once or twice
// void printArray(int arr[],int size){
//     cout<<"Enter the elements of your array: ";
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }

//     cout<<"Your array is ";
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void sortArray(int arr[],int size){
//     for(int i=0;i<size-1;i++){
//         for(int j=0;j<size-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
    
//     cout<<"Your sorted array is ";
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void duplicate(int arr[],int size){
//     cout<<"Your duplicate elements in the array are ";
//     for(int i=0;i<size;i++){
//         if(arr[i]==arr[i+1]){
//             cout<<arr[i]<<" ";
//         }
//     }
// }

// int main(){
//     int arr[300]={0};
//     int size=0;

    // cout<<"Enter the size of your array :";
    // cin>>size;

    // printArray(arr,size);
//     sortArray(arr,size);
//     duplicate(arr,size);

//     return 0;
// }



//WAP to find the common elements of two sorted arrays in which elements are in increasing order.
//************************ TIME COMPLEX SOLUTION USING NESTED LOOPS*****************************
// void printArray(int arr[],int size){
//     cout<<"Enter the elements of your array: ";
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }

//     cout<<"Your array is ";
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void findIntersection(int arr1[],int arr2[],int size1, int size2){
//     cout<<"Your intersected elements are ";

//     for(int i=0;i<size1;i++){
//         for(int j=0;j<size2;j++){
//             if(arr1[i]==arr2[j]){
//                 cout<<arr1[i]<<" ";
//                 arr2[j]= INT_MIN;
//             }
//         }
//     }
// }

// int main(){
    // int arr1[300]={0},arr2[300]={0};
    // int size1=0,size2=0;

    // cout<<"Enter the size of your first array :";
    // cin>>size1;

    // cout<<"Enter the size of your second array :";
    // cin>>size2;

    // printArray(arr1,size1);
    // printArray(arr2,size2);
    // findIntersection(arr1,arr2,size1,size2);
// }

//************************** CORRECT APPROACH *****************************
//************************** 2 POINTER APPROACH FOR LESS TIME COMPLEXITY **************************
// void printArray(int arr[],int size){
//     cout<<"Enter the elements of your array: ";
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }

//     cout<<"Your array is ";
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void findIntersection(int arr1[],int arr2[],int size1, int size2){
//     cout<<"The common elements in your arrays is ";

//     int i=0,j=0;
//     while(i<size1 && j<size2){
//         if(arr1[i]==arr2[j]){
//             cout<<arr1[i]<<" ";
//             i++;
//             j++;
//         }
//         else if(arr1[i]<arr2[j]){
//             i++;
//         }
//         else{
//             j++;
//         }
//     }
// }

// int main(){
//     int arr1[300]={0},arr2[300]={0};
//     int size1=0,size2=0;

//     cout<<"Enter the size of your first array :";
//     cin>>size1;

//     cout<<"Enter the size of your second array :";
//     cin>>size2;

//     printArray(arr1,size1);
//     printArray(arr2,size2);
//     findIntersection(arr1,arr2,size1,size2);
// }




// //WAP to find all the set of numbers in an array which have sum equal to a number S.
// void sortArray(int arr[],int size){
//     for(int i=0;i<size-1;i++){
//         for(int j=0;j<size-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }

// int main(){
//     int arr[400]={0};
//     int size=0,S=0;

//     cout<<"Enter the size of your array:";
//     cin>>size;

//     cout<<"Enter the elements of your array:";
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }

//     cout<<"Your array is ";
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }

//     sortArray(arr,size);

//     cout<<endl<<"Enter the sum S ,of which you want to find pairs :";
//     cin>>S;

//     cout<<endl<<"The pairs of numbers having sum S in the array are: ";
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             if((arr[i]+arr[j])==S){
//                 cout<<arr[i]<<" "<<arr[j];
//             }
//         }
//         cout<<endl;
//     }

// }




//WAP to find all the set of triplets of numbers in an array which have sum equal to a number S.
// void sortArray(int arr[],int size){
//     for(int i=0;i<size-1;i++){
//         for(int j=0;j<size-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }

// int main(){
//     int arr[400]={0};
//     int size=0,S=0;

//     cout<<"Enter the size of your array:";
//     cin>>size;

//     cout<<"Enter the elements of your array:";
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }

//     cout<<"Your array is ";
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }

//     sortArray(arr,size);

//     cout<<endl<<"Enter the sum S ,of which you want to find triplets :";
//     cin>>S;

//     cout<<endl<<"The triplets of numbers having sum S in the array are: ";
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             for(int k=j+1;k<size;k++){
//                 if((arr[i]+arr[j]+arr[k])==S){
//                     cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
//                 }
//             }
//         }
//         cout<<endl;
//     }

// }




//WAP to sort an array which is having only 1 and 0, in the form having all zeroes on one side and all the ones on another side .
// int main(){
//     int arr[8]={1,0,0,1,0,1,1,0};
//     int i=0,j=7;

//     cout<<"HELLO";
//     while(i<j){
//         if((arr[i]==1)&& arr[j==0]){
//             swap(arr[i],arr[j]);
//             i++;
//             j--;
//         }
//         else if(arr[i]==0){
//             i++;
//         }
//         else if(arr[j]==1){
//             j--;
//         }
//         else if((arr[i]==0)&&(arr[j]==1)){
//             i++;
//             j--;
//         }
//     }

//     for(int i=0;i<8;i++){
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }




//WAP to search a number from an array using binary search
// int binarySearch(int arr[],int size,int key){
    // int start=0;
    // int end=size-1;
    // int mid=start+(end-start)/2;

    // while(start<=end){
    //     if(arr[mid] == key){
    //         return mid;
    //     }
    //     if(arr[mid]>key){
    //         end=mid-1;
    //     }
    //     else{
    //         start=mid+1;
    //     }
    //     mid=start+(end-start)/2;
    // }
    // return -1;
// }

// int main(){
//     int even[6]={12,15,16,18,19,27};
//     int odd[5]={1,16,18,24,35};

//     int index=binarySearch(even,6,15);

//     cout<<"Value is at index "<<index;
//     return 0;
// }




//WAP to find the first and the last occurence of a number in the array using binary search.
// int firstOcc(int arr[],int size,int key){
//     int s=0, e=size;
//     int mid= s+(e-s)/2;
//     int ans=-1;

//     while(s<=e){
//         if(arr[mid]==key){
//             ans=mid;
//             e=mid-1;
//         }
//         else if(arr[mid]>key){
//             e=mid-1;
//         }
//         else if(arr[mid]<key){
//             s=mid+1;
//         }
//         mid= s+(e-s)/2;
//     }
//     return ans;
// }

// int lastOcc(int arr[],int size,int key){
//     int s=0, e=size;
//     int mid= s+(e-s)/2;
//     int ans=-1;

//     while(s<=e){
//         if(arr[mid]==key){
//             ans=mid;
//             s=mid+1;
//         }
//         else if(arr[mid]>key){
//             e=mid-1;
//         }
//         else if(arr[mid]<key){
//             s=mid+1;
//         }
//         mid= s+(e-s)/2;
//     }
//     return ans;
// }

// int main(){
//     int arr[6]={4,8,15,15,15,22};

//     cout<<"First occurrence of 15 is at index "<<firstOcc(arr,6,15)<<endl;
//     cout<<"Last occurrence of 15 is at index "<<lastOcc(arr,6,15);
// }




//WAP to find the maximum value element in a mountain array using binary search.
// int findMax(int arr[],int size){
//     int s=0,e=size;
//     int mid= s+(e-s)/2;

//     while(s<=e){
//         if ((arr[mid]>arr[mid+1])&&(arr[mid]>arr[mid-1])){
//             return mid;
//         }
//         else if(arr[mid]<arr[mid-1]){
//             e=mid-1;
//         }
//         else if(arr[mid]<arr[mid+1]){
//             s=mid+1;
//         }
//         mid= s+(e-s)/2;
//     }
// }

// int main(){
//     int arr[7]={2,4,5,6,14,1,0};

//     cout<<"The maximum element in the mountain array is at index : "<<findMax(arr,7);
//     return 0;
// }


//                 ANOTHER APPROACH
// int findMax(int arr[],int size){
//     int s=0,e=size;
//     int mid= s+(e-s)/2;

//     while(s<e){
//         if(arr[mid]<arr[mid+1]){
//             s=mid+1;
//         }
//         else{
//             e=mid;
//         }
//         mid= s+(e-s)/2;
//     }
//     return s;
// }

// int main(){
//     int arr[7]={2,4,5,6,4,1,0};

//     cout<<"The maximum element in the mountain array is at index : "<<findMax(arr,7);
//     return 0;
// }




//WAP to find a pivot element in an array which is having one pair of sorted elements greater than another pair of sorted elements both in increasing order (Eg. {7,8,9,2,4},{4,5,7,9,1,2})
// int findPivot(int arr[],int size){
//     int s=0,e=size;
//     int mid= s+(e-s)/2;

//     while(s<e){
//         if(arr[mid]>=arr[0]){
//             s=mid+1;
//         }
//         else{
//             e=mid;
//         }
//         mid= s+(e-s)/2;
//     }
// }

// int main(){
//     int arr[7]={16,0,1,2,3,5,7};

//     cout<<"The pivot in the array is at index : "<<findPivot(arr,7);
//     return 0;
// }





//WAP to find an element in a sorted and rotated array (Eg: {7,9,1,3,5})
// int findPivot(int arr[],int size){
//     int s=0,e=size;
//     int mid=s+(e-s)/2;

//     while(s<e){
//         if (arr[mid]>arr[0]){
//             s=mid+1;
//         }
//         else{
//             e=mid;
//         }
//         mid=s+(e-s)/2;
//     }
// }

// int binarySearch(int arr[],int s,int e,int key){
//         int start=s;
//     int end=e;
//     int mid=start+(end-start)/2;

//     while(start<=end){
//         if(arr[mid] == key){
//             return mid;
//         }
//         if(arr[mid]>key){
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }
//         mid=start+(end-start)/2;
//     }
//     return -1;
// }

// int main(){
//     int arr[5]={7,9,1,3,5};
//     int k=0;
//     cout<<"Enter the value of k you want to find: ";
//     cin>>k;
//     int pivot=findPivot(arr,5);

//     if((arr[pivot]<=k)&&(k<=arr[4])){
//         cout<<binarySearch(arr,pivot,4,k);
//     }
//     else{
//         cout<< binarySearch(arr,0,pivot-1,k);
//     }
//     return 0;
// }




//Find the square root of a number using binary search.
// long long int binarySearch(int num){
//     int s=0;
//     int e=num;
//     long long int mid=s+(e-s)/2;
//     long long int ans=0;

//     while(s<=e){
//         if((mid*mid)>num){
//             e=mid-1;
//         }
//         else if((mid*mid)<num){
//             ans=mid;
//             s=mid+1;
//         }
//         else if(mid*mid==num){
//             ans=mid;
//             break;
//         }
//         mid=s+(e-s)/2;
//     }
//     cout<< ans;
// }

// int main(){
//     int num=0;
//     cout<<"Enter the number you want to find the square root of which: ";
//     cin>>num;

//     binarySearch(num);
//     return 0;
// }