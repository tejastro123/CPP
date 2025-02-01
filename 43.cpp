#include<iostream>
#include<vector>
using namespace std;
// fibonacci series
vector<int> fibonacci(int n) {
    vector<int> fib(n);
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i < n; i++)
        fib[i] = fib[i-1] + fib[i-2];
    return fib;
}
// TC = O(2^n - 1)*k & SC = O(n)

// binary search using recursion algorithm
bool binarySearch(vector<int> arr, int target, int st ,int end){
    if(st<=end){
        int mid = st + (end - st) / 2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]<target)
            return binarySearch(arr, target, mid+1, end);
        else
            return binarySearch(arr, target, st, mid-1);
    }
    return false;
}
// TC = O(logn) & SC = O(logn)

// is array sorted using 
bool isSorted(vector<int> arr,int n){
    if(n==0 || n==1) return true;
    
    return arr[n-1] >= arr[n-2] && isSorted(arr,n-1);
}// TC = O(n) & SC = O(n)

int main()
{
    int n ;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Fibonacci series: ";
    vector<int> fib = fibonacci(n);
    for(int i = 0; i < n; i++)
        cout << fib[i] << " ";
    cout << endl;
    
    vector<int> arr = { 2,4,5,9,3,2,7,8};
    cout << "Binary Search: ";
    int target;
    cout << "Enter the target element to search: ";
    cin >> target;
    int e = arr.size() - 1;
    if(binarySearch(arr, target,arr[0],arr[e]))
    cout << "Element found in the array" << endl;
    else
    cout << "Element not found in the array" << endl;
    
    cout << "Is array sorted? " << (isSorted(arr, n)? "Yes" : "No") << endl;
    
    return 0;
    
}