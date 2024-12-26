/*There is an integer array nums sorted in ascending order 
(with distinct values).
Prior to being passed to your function, nums is possibly 
rotated at an unknown pivot index k (1 <= k < nums.length) 
such that the resulting array is [nums[k], nums[k+1], ..., 
nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). 
For example, [0,1,2,4,5,6,7] might be rotated at pivot 
index 3 and become [4,5,6,7,0,1,2].
Given the array nums after the possible rotation and an 
integer target, return the index of target if it is in 
nums, or -1 if it is not in nums.
You must write an algorithm with O(log n) runtime 
complexity.There is an integer array nums sorted in 
ascending order (with distinct values).
Prior to being passed to your function, nums is possibly 
rotated at an unknown pivot index k (1 <= k < nums.length) 
such that the resulting array is [nums[k], nums[k+1], ..., 
nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). 
For example, [0,1,2,4,5,6,7] might be rotated at pivot index 
3 and become [4,5,6,7,0,1,2].
Given the array nums after the possible rotation and an 
integer target, return the index of target if it is in 
nums, or -1 if it is not in nums.
You must write an algorithm with O(log n) runtime 
complexity */
//write cpp code

// #include <iostream>
// #include <vector>
// using namespace std;
// TC : O(logn)
// int search(vector<int>& nums, int target) {
//     int st = 0, end = nums.size() - 1;
//     while (st <= end) {
//         int mid = st + (end - st) / 2;
//         if (nums[mid] == target) { 
//             return mid;
//         }
//         if (nums[st] <= nums[mid]){ //left sorted
//             if (nums[st] <= target && target <= nums[mid]) {
//             end = mid - 1;
//             }
//             else {
//                 st = mid + 1;
//             }
//         }
//         else { //right sorted
//             if (nums[mid] <= target && target <= nums[end]) {
//             st = mid + 1;
//             }
//             else {
//                 end = mid - 1;
//             }
//         }
//     }
//     return -1;
// }
// int main() {
//     vector<int> nums = {4,5,6,7,0,1,2};
//     int target = 0;
//     cout << search(nums, target) << endl;
// }