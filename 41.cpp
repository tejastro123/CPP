// subarray sum equals k 
/*Given an array of integers nums and an integer k, return the total 
number of subarrays whose sum equals to k.
A subarray is a contiguous non-empty sequence of elements within an array.*/

// #include<iostream>
// #include<vector>
//  #include<unordered_map>  
// #include<algorithm>
// using namespace std;

// 1. brute-force
// int subarraySum(vector<int>& nums, int k) { TC: O(n^2) SC: O(n^2)
//     int n = nums.size();
//     int count = 0;
//     for (int i = 0; i < n; i++) {
//         int sum = 0;
//         for (int j = i; j < n; j++) {
//             sum += nums[j];
//             if (sum == k) count++;
//         }
//     }
//     return count;
// }

// 2. using prefix and hashmap
// int subarraySum(vector<int>& nums, int k) { // TC: O(n) S: O(n)
//     int n = nums.size();
//     int count =0;
//     vector<int> prefixsum(n,0);
//     prefixsum[0] = nums[0];
//     for(int i=1; i<n; i++){
//         prefixsum[i] = prefixsum[i-1] + nums[i];
//     }
        
//     unordered_map<int, int> map;
//     for(int i=0; i<n; i++){
//         if(prefixsum[i] == k) count++;
//         int val = prefixsum[i] - k;
//         if(map.find(val)!=map.end()) count += map[val];
//         if(map.find(prefixsum[i]) == map.end()) map[prefixsum[i]]= 0 ;
//         map[prefixsum[i]]++;
//     }
//     return count;
// }


// int main()
// {
//     vector<int> nums = {9,4,0,20,3,10,5};
//     int k = 33;
//     cout << "Total number of subarrays whose sum equals to " << k << " is: " << subarraySum(nums, k) << endl;
//     return 0;
// }