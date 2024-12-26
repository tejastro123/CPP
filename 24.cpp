//SORTING ALGORITHMS c++ codes
/*sorting is arranging data in a particular order*/

// #include<iostream>
// using namespace std;

//1.BUBBLE SORT
// void bubbleSort(int arr[],int n){//O(n^2)
//     for(int i=0;i<n-1;i++){
//         bool isSwap = false;
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 isSwap = true;
//             }
//         }
//         if(!isSwap) return;
//     }
// }

//2.SELECTION SORT
// void selectionSort(int arr[],int n){//O(n^2)
//     for(int i=0;i<n-1;i++){
//         int minIndex = i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[minIndex]) minIndex = j;
//         }
//         swap(arr[i],arr[minIndex]);
//     }
// }

//3.INSERTION SORT
// void insertionSort(int arr[],int n){//O(n^2)
//     for(int i=1;i<n;i++){
//         int curr = arr[i];
//         int prev = i-1;
//         while(prev>=0 && arr[prev]>curr){
//             arr[prev+1] = arr[prev];
//             prev--;
//         }
//         arr[prev+1] = curr; 
//     }
// }

//DECENDING ORDER
//void insertionSortDec(int arr[],int n){//O(n^2)
//     for(int i=1;i<n;i++){
//         int curr = arr[i];
//         int prev = i-1;
//         while(prev>=0 && arr[prev] < curr){
//             arr[prev+1] = arr[prev];
//             prev--;
//         }
//         arr[prev+1] = curr; 
//     }
// }
// void selectionSortDec(int arr[],int n){//O(n^2)
//     for(int i=0;i<n-1;i++){
//         int minIndex = i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j] > arr[minIndex]) minIndex = j;
//         }
//         swap(arr[i],arr[minIndex]);
//     }
// }
// void bubbleSortDec(int arr[],int n){//O(n^2)
//     for(int i=0;i<n-1;i++){
//         bool isSwap = false;
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j] < arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 isSwap = true;
//             }
//         }
//         if(!isSwap) return;
//     }
// }


// int main()
// {
//     int arr[] = {5,3,8,4,2};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     bubbleSort(arr,n);
//     selectionSort(arr,n);
//     insertionSort(arr,n);
//     for(int i=0;i<n;i++) cout<<arr[i]<<" ";
//     return 0;
// }