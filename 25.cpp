
/*Given an array nums with n objects colored red, white, 
or blue, sort them in-place so that objects of the same 
color are adjacent, with the colors in the order red, 
white, and blue. We will use the integers 0, 1, and 2 to 
represent the color red, white, and blue, respectively.
You must solve this problem without using the library's 
sort function for the array.*/
//write c++ code

//brute-force = O(nlogn)
//optimized = O(n)

#include <iostream>
#include <vector>
using namespace std;

//optimal=>
// void sortColors(vector<int> &nums){//O(n)
//     int n =nums.size();
//     int count0 = 0, count1 = 0, count2 = 0;
//     for(int i = 0; i < n; i++){
//         if(nums[i] == 0) count0++;
//         else if(nums[i] == 1) count1++;
//         else count2++;
//     }
//     int idx = 0;
//     for(int i = 0; i < count0; i++) nums[idx++] = 0;
//     for(int i = 0; i < count1; i++) nums[idx++] = 1;
//     for(int i = 0; i < count2; i++) nums[idx++] = 2;
// }

//DUTCH NATIONAL FLAG ALGORITHM 
// TC:O(n) with single pass & SC:O(1)
//this uses three pointers = low,mid,high
/* (zeros)0--->l-1 (ones)l--->m-1 (unsorted)m--->h 
(twoes)h+1--->n-1*/
// void sortColors(vector<int> &nums){
//     int low = 0, mid = 0, high = nums.size()-1;
//     while(mid <= high){
//         if(nums[mid] == 0){
//             swap(nums[low], nums[mid]);
//             low++; mid++;
//         }
//         else if(nums[mid] == 1) mid++;
//         else{
//             swap(nums[mid], nums[high]);
//             high--;
//         }
//     }
// }

// int main()
//{
//     vector<int> nums = {2,0,2,1,1,0};
//     int n = nums.size();
//     sortColors(nums);
//     for(int i = 0; i < n; i++) cout << nums[i];
// }

