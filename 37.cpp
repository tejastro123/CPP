
// #include<stdio.h>
// #include<vector>
// #include<algorithm>
// #include<unordered_map>
// #include<unordered_set>
// using namespace std;
//TWO SUM

// 1.brute force O(n^2) code
// vector<int>twoSumBruteForce(vector<int>& nums, int target){
//     int n=nums.size();
//     int first = 0, second = 0;
//     int sum = 0;
//     vector<int> ans ;
//     for(int i=0;i<n;i++){
//         first = nums[i];
//         for(int j=i+1;j<n;j++){
//             second = nums[j];
//             sum = first + second;
//             if(sum == target){
//               ans = {i,j};
//             }
//         }
//     }
//     return ans ;
// }

// 2.Better O(nlogn)
// vector<int>twoSumBetter(vector<int>& nums, int target){
//     sort(nums.begin(), nums.end());
//     int st=0,end=nums.size();
//     int sum=0;
//     vector<int> ans ;

//     while(st<end){
//         sum = nums[st] + nums[end-1];
//         if(sum == target){
//             ans = {st, end-1};
//             break;
//         }
//         else if(sum < target){
//             st++;
//         }
//         else{
//             end--;
//         }
//     }
//     return ans ;
// }

// 3.Optimized - hashing
// vector<int> twoSum(vector<int>& nums, int target){
//     unordered_map<int, int> map;
//     int n = nums.size();
//     vector<int> result;
//     for(int i = 0; i < n ; i++){
//         int first = nums[i];
//         int sec = target - first;

//         if(map.find(sec) != map.end()){
//             result.push_back(map[sec]);
//             result.push_back(i);
//             break;
//         }
//         map[first] = i;
//     }
//     return result;
// }


//Find missing and repeated values in grid
// vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid){ //O(n^2)
//     vector<int> result;
//     unordered_set<int> set;
//     int n = grid.size();
//     int a,b;
//     int expsum = 0, actualsum = 0;
//     for(int i = 0; i < n ; i++){
//         for(int j = 0; j < n ; j++){
//             actualsum += grid[i][j];
//             if(set.find(grid[i][j]) != set.end()){
//                 a = grid[i][j];
//                 result.push_back(a);
//             }
//             set.insert(grid[i][j]);
//         }
//     }
//     expsum = ((n*n) * ((n*n) + 1)) / 2;
//     b = expsum + a - actualsum;
//     result.push_back(b);
//     return result;
// }


//Find the duplicate
// 1.Using sets
// int findDuplicate(vector<int>& nums){ //tc: O(n), sc: O(n)
//     int n = nums.size();
//     unordered_set<int> set;
//     for(int val : nums){
//         if(set.find(val) != set.end()){
//             return val;
//         }
//         set.insert(val);
//     }
//     return -1;
// }

// 2. Using slow-fast approach
// int findDuplicate(vector<int>& nums){ //tc: O(n), sc: O(1)
//     int slow = nums[0];
//     int fast = nums[0];
//     do{
//         slow = nums[slow];//+1
//         fast = nums[nums[fast]];//+2
//     }while(slow != fast);

//     slow = nums[0];

//     while(slow != fast){
//         slow = nums[slow];//+1
//         fast = nums[fast];//+1
//     } 
//     return slow;
// }


// int main()
// {
    // vector<int> nums = {2, 7, 11, 15};
    // int target = 9;
    // vector<int> result1 = twoSumBruteForce(nums, target);
    // printf("The indices are: %d and %d\n", result1[0], result1[1]);
    // vector<int> result2 = twoSumBetter(nums, target);
    // printf("The indices are: %d and %d\n", result2[0], result2[1]);
    // vector<int> result3 = twoSum(nums, target);
    // printf("The indices are: %d and %d\n", result3[0], result3[1]);

    // vector<vector<int>> grid = {{7, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // vector<int> result = findMissingAndRepeatedValues(grid);
    // printf("Missing: %d, Repeated: %d\n", result[1], result[0]);

//     vector<int> nums = {3, 1, 3, 4,2};
//     int duplicate = findDuplicate(nums);
//     printf("The duplicate is: %d\n", duplicate);
    
// }