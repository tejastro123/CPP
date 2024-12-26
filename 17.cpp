/*BINARY SEARCH
it is only applied on sorted arrays(asc/des)*/

// #include<iostream>
// using namespace std;

// iteration method - TC & SC : O(logn)
// int binary_search(int arr[], int n, int target) {
//     int st = 0, en = n - 1;
//     while (st <= en) {
//         int mid = st + (en-st) / 2;    
//         if (arr[mid] == target) return mid;
//         else if (arr[mid] < target) st = mid + 1;
//         else en = mid - 1;
//     }
//     return -1;
// }

//recursion method - SC=O(1) & TC=O(logn)
// int binary_search(int arr[], int n, int target, int st, int en){
//     if(st>en) return -1;
//     int mid = st + (en-st) / 2;
//     if(arr[mid]==target) return mid;
//     else if(arr[mid]<target){
//         return binary_search(arr,n,target,mid+1,en);
//     }
//     else{
//         return binary_search(arr,n,target,st,mid-1);
//     }
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int arr[]={-1,0,3,5,9,12};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int target;
//     int st = arr[0];
//     int en = arr[n-1];
//     cout<<"Enter the target element: ";
//     cin>>target;
//     int result = binary_search(arr,n,target,st,en);
//     if(result != -1)
//     cout << "Element is present at index " << result;
//     else
//     cout << "Element is not present in array";

// }
