//merge sort

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void mergeArrays(vector<int>& arr, int st, int mid, int end){//O(n)
    vector<int> temp;
    int i = st, j = mid+1;

    while(i<=mid && j<=end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
          temp.push_back(arr[i]);
          i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int idx=0; idx<temp.size(); idx++){
        arr[st+idx] = temp[idx];
    }
}
void merge(vector<int>& arr, int st, int end){ // TC = O(logn *n) , SC = O(n)/     
    if(st<end){
        int mid = st + (end-st)/2;
        merge(arr, st, mid);
        merge(arr, mid+1, end);
        mergeArrays(arr, st, mid, end);
    }
}

int main()
{
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    int n = arr.size();
    merge(arr, 0, n-1);
    cout << "Sorted array is: ";
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    return 0;
}