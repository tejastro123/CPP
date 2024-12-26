#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

//MERGE SORTED ARRAYS problem
// void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
//     int i = m - 1, j = n - 1, idx = m + n - 1;
//     while (i >= 0 && j >= 0) {
//         if (nums1[i] > nums2[j]) {
//             nums1[idx] = nums1[i];
//             i--; idx--;
//         }
//         else {
//             nums1[idx] = nums2[j];
//             j--; idx--;
//         }
//     }
//     while (j >= 0) {
//         nums1[idx] = nums2[j];
//         j--; idx--;
//     }
// }
// TC: O(m+n)
// SC: O(1) as we are not using any extra space.

//NEXT PERMUTATION
/*A permutation of an array of integers is an arrangement 
of its members into a sequence or linear order.
The next permutation of an array of integers is the next 
lexicographically greater permutation of its integer. 
More formally, if all the permutations of the array are 
sorted in one container according to their lexicographical 
order, then the next permutation of that array is the 
permutation that follows it in the sorted container. If 
such arrangement is not possible, the array must be 
rearranged as the lowest possible order (i.e., sorted in ascending order).*/
//Given an array of integers nums, find the next permutation of nums.
//The replacement must be in place and use only constant extra memory.

/*Brute-force method use recursion to find 1. all permutations
2.lexicographiclly next permutation*/
/*OPTIMAL APPROACH : TC: O(n) , SC: O(1)
  1) find pivot arr[i]<arr[i+1]
  2) find right most element > pivot, swap(RME,pivot)
  3) reverse(pivot+1)to(n-1) dec-->inc
*/
// use next_permutation(nums.begin(), nums.end()); 
void nextPermutation(vector<int>& nums){
    // 1st step : find pivot
    int n = nums.size();
    int piv = -1;
    for(int i = n - 2; i >= 0; i--){
        if(nums[i] < nums[i + 1]) {
            piv = i;
            break;
        }
    }
    if(piv == -1){//in place changes
        reverse(nums.begin(), nums.end());
        return;
    }
     
    // 2nd step : next larger element
    for(int i = n - 1; i > piv ; i--){
        if(nums[i] > nums[piv]) {
            swap(nums[i],nums[piv]);
            break;
        }
    }

    // 3rd step : reverse (piv+1 to n-1)
    // reverse(nums.begin() + piv+1 , nums.end() );
    int i = piv+1;
    int j = n-1;
    while(i<=j){
        swap(nums[i],nums[j]);
        i++; j--;
    }
}




int main()
{
    // vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    // int m = 3;
    // vector<int> nums2 = {2, 5, 6};
    // int n = 3;
    // merge(nums1, m, nums2, n);
    // int sz = nums1.size();
    // for (int i = 0; i < sz; i++) {
    //     cout << nums1[i] << " ";
    // }

    vector<int> nums = {1, 2, 3};
    int n = nums.size();
    nextPermutation(nums);
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }

}
