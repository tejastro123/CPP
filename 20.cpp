//SINGLE ELEMENT IN SORTED ARRAY(binary search)
/*You are given a sorted array consisting of only 
integers where every element appears exactly twice, 
except for one element which appears exactly once.
Return the single element that appears only once.
Your solution must run in O(log n) time and O(1) space.*/
//write cpp code 
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int singleElement(vector<int> &nums){
//     int st = 0, end = nums.size() - 1;
//     while (st < end){
//         int mid = st + (end - st) / 2;
//         if (nums[mid] == nums[mid ^ 1]){
//             st = mid + 1;
//         }
//         else{
//             end = mid;
//         }
//     }
//     return nums[st];
// }

//more optimized approach
//TC=O(logn) & SC=O(1)
// int singleElement(vector<int> &nums){
//     int n = nums.size();
//     if(n==1) return nums[0];
//     int st = 0, end = n-1;
//     while (st <=end){
//         int mid = st + (end - st) / 2;

//         if(mid==0 && nums[0] != nums[1]) return nums[mid];
//         if(mid==n-1 && nums[n-1] != nums[n-2]) return nums[mid];

//         if(nums[mid-1] != nums[mid] && nums[mid] != nums[mid+1]) return nums[mid];

//         if(mid % 2 == 0){//even
//            if(nums[mid-1] == nums[mid]){//left
//                 end = mid-1;
//            }
//            else{//right
//                 st = mid+1;  
//            }
//         }
//         else{//odd
//             if(nums[mid-1] == nums[mid]){//right
//                 st = mid+1;
//             }
//             else{//left
//                 end = mid-1;
//             }
//         }
//     }
//     return -1;
// }

// int main()
// {
//     vector<int> nums = {1,1,2,2,3,4,4};
//     cout<<singleElement(nums)<<endl;
//     return 0;
// }