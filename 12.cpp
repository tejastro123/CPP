// time complexity
/* time complexity is the amount of time taken 
as a function od input size(n)*/
/*the relation between no.of operations of function vs 
input size is called time complexity*/
/*Eg: y=x gives TC: O(n)*/
//Big O notation 
/*it gives worst case computation*/
/*Eg: f(n)=4n^2+3n+5 
first removie all constants: n^2+n+1
maximum power fives TC: O(n^2)*/
// worst case:O(n),average:0,best case:omega

//space complexity
/*it is the amount of space taken by an algorithm 
as function of input size(n)*/
//space complexity is O(n) when we use array of size n
//space complexity is O(1) when we use constant space
/*we only consider auxillary space for space complexity*/
/*Auxillary space is space used by algorithm other than
space used by input*/

/*O(1)>O(n)>O(logn)>O(n)>O(nlogn)>O(n^2)>O(n^3)>O(2^n)>O(n!)*/
/*if graph of TC is near x-axis is best & which is near 
y-axis is worst case*/

// #include<iostream>
// #include<algorithm>
// #include<cmath>
// using namespace std;
//example of O(1) or O(k) constant time complexity
// int sum(int a,int b){
//     return a+b;
// }

//example of O(n):sum of array,factorial,kadane's algorithm
// int sum(int arr[],int n){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     return sum;
// }

//example of O(n^2):bubble sort function
// int bubbleSort(int arr[],int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]); 
//             }
//         }
//    }
//     return 0;
// }
/* time complexity = (n-1)k+(n-2)k+(n-3)k+......+2k+k
                   = k(n-1)n/2 = O(n^2) */

//example of O(logn)
// int binarySearch(int arr[],int n,int target){
//     int st=0,end=n-1;
//     while(st<=end){
//         int mid=(st+end)/2;
//         if(arr[mid]==target){
//             return mid;
//         }
//         if(arr[mid]<target){
//             st=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//     }   
//     return -1;
// }
/* xth operation = n/2^x =1 ( n/2^0,n/2^1,n/2^3....n/2^x)
time complexity(x) = log(n)*/

/*example of O(nlogn): sortings(merge-sort,quick-sort
,greedy algorithms)*/
//it is better than O(n)&O(n^2)
// int mergeSort(int arr[],int n){
//     if(n<=1){
//         return 0;
//     }
//     int mid=n/2;
//     int left[mid],right[n-mid];
//     mergeSort(left,mid);
//     mergeSort(right,n-mid);
//     merge(left,right,arr,mid,n-mid);
//     return 0;
// }
/* time complexity = 2*log(n) + n = O(nlogn) */

/*example of O(2^n):worst tc,exponenial,used in recursion*/
/*example of O(n!):the worst tc of all 
used in permutation generation,combinatorics
n queens,knughts tour,strings*/

//problems
//1.prime number
// int prime(int n) {
//     if (n <= 1) {
//         return 0;
//     }
//     for (int i = 2; i <= sqrt(n); i++) {    
//         if (n % i == 0) {   
//             return 0;
//         }
//     }
//     return 1;
// }
//time complexity =O(n^1/2)

//2.selection sort
// int selectionSort(int arr[], int n) {
//     for (int i=0; i<n-1;i++){
//         int minIndex = i;
//         for (int j=i+1;j<n;j++){
//             if (arr[minIndex] > arr[j]){
//                 minIndex = j;
//             }
//             swap(arr[minIndex],arr[i]);
//         }
//     }
//     return 0;
// }
//operations = k[ (n-1)+(n-2)+(n-3)+ ..... +1] = k[n(n-1)/2] 
//time complexity = O(n^2)

//RECURSION

//time complexity
// int factorial(int n) {
//     if (n == 0) {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }
/*1.recurrence relation
  2.total recalls*work in each call*/
/*f(n)=k+f(n-1)
  f(n-1)=k+f(n-2)
  .
  .
  .
  f(1)=k+f(0)
  => f(n)=k*n+k
  tc = O(n)*/
/*for n-->~n calls
  tc=O(n*k)=O(n)*/

//space complexity
/*sc= height of call_stack * memory of each call
    =n*k = O(n)*/

/*example:fibonacci
 int fib(int n) {
     if (n == 0 || n == 1) {
         return n;
     }
     return fib(n - 1) + fib(n - 2);
}
TC= total calls * wd in each
  = [ 2^0+2^1+2^2+....+2^n-1]
  = 1*(2^n - 1)/(2-1)
  =(2^n - 1)
TC= O(2^n)
golden ratio exact TC=O(1.618^n)
SC= depth of call_stack * memory of one stack
  =n*k= O(n)*/

//merge-sort algorithm
//TC= O(n log n)
//SC= O(n)

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void merge(int arr[], int si,int mid,int ei){
//     vector<int> temp;
//     int i=si,j=mid+1;

//     while(i<=mid && j<=ei){
//         if(arr[i]<=arr[j]){
//             temp.push_back(arr[i++]);
//         }
//         else{
//             temp.push_back(arr[j++]);
//         }
//     }
//     while(i<=mid){
//         temp.push_back(arr[i++]);
//     }
//     while(j<=ei){
//         temp.push_back(arr[j++]);
//     }
//     for(int i=si;i<=ei;i++){
//         arr[i]=temp[i-si];
//     }
// }
//TC of merge step is O(n) 

// void mergeSort(int arr[], int si, int ei){
//     if(si>=ei){
//         return;
//     }
//     int mid=(si+ei)/2;
//     mergeSort(arr,si,mid);
//     mergeSort(arr,mid+1,ei);
//     merge(arr,si,mid,ei);
// }
/*TC of merge-sort = O(total calls * wd in each call)
                   =O(n * x) // in each call, n/2^x =1 
                   = O(n*logn) = O(nlogn) */
/*SC = O(logn + n) = O(recursion of merge-sort + merge)
     = O(n)*/ // we ignore small term in sc 

// int main(){
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     mergeSort(arr,0,n-1);
//     cout<<"Sorted array: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


//Practicle Usage :
/*
1.n>10^8  O(logn),O(1)
2.n<=10^8 O(n)
3.n<=10^6 O(nlogn)
4.n<=10^4 O(n^2)
5.n<=500  O(n^3)
6.n<=25   O(2^n)
7.n<=12   O(n!)
*/