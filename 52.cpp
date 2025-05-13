//QUICK SORT
 
#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr, int start, int end){
    int idx = start-1, pivot = arr[end];

    for(int j=start; j<end; j++){
        if(arr[j] <= pivot){
            idx++;
            swap(arr[idx], arr[j]);
        }
    }
    idx++;
    swap(arr[idx], arr[end]);
    return idx;
}

void quicksort(vector<int> &arr, int start, int end){ // TC: O(nlogn) , in worest case = O(n^2)
    if(start<end){
        int pividx = partition(arr, start, end);
        quicksort(arr, start, pividx-1);
        quicksort(arr, pividx+1, end);
    }
}

int main(){
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    quicksort(arr, 0, arr.size()-1);
    for(int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    return 0;
}