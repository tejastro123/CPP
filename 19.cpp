//PEAK INDEX IN MOUNTAIN ARRAY(binary search)
/*You are given an integer mountain array arr of length n 
where the values increase to a peak element and then decrease.
Return the index of the peak element.
Your task is to solve it in O(log(n)) time complexity.*/
//write cpp code

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// int peakIndexInMountainArray(vector<int>& arr){
//     int n = arr.size();
//     int st = 0, end = n - 1;
//     while (st < end){
//         int mid = st + (end - st) / 2;
//         if (arr[mid] < arr[mid + 1]){
//             st = mid + 1; 
//         }
//         else{
//                 end = mid;
//         }
//     }
//     return st;
// }

//more simplified code
int peakIndexInMountainArray(vector<int>& arr){
    int st=1, end=arr.size()-2;
    while (st <= end){
        int mid = st + (end - st)/2;
        if (arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
            return mid;
        }
        else if (arr[mid-1] < arr[mid]){//right
            st = mid + 1;
        }
        else{//left
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {0,3,8,9,5,2};
    int idx = peakIndexInMountainArray(arr);
    cout << "Peak index is: " << idx << endl;
    cout << "Peak number is: " << arr[idx] << endl;
    return 0;
}

