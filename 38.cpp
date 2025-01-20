// 3 sum
/*Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
Notice that the solution set must not contain duplicate triplets*/
// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<unordered_set>
// using namespace std;

// //1.brute force method 
// vector<vector<int>> threeSum(vector<int>& nums){
//     sort(nums.begin(), nums.end());
//     vector<vector<int>> result;
//     int n = nums.size();
//     for(int i = 0; i < n ; i++){
//         for(int j = i + 1; j < n ; j++){
//             for(int k = j + 1; k < n; k++){
//                 if(nums[i] + nums[j] + nums[k] == 0){
//                     result.push_back({nums[i], nums[j], nums[k]});
//                 }
//             }
//         }
//     }
//     return result;
// }
// //2.using two pointers method
// vector<vector<int>> threeSumPtr(vector<int>& nums){
//     sort(nums.begin(), nums.end());
//     vector<vector<int>> result;
//     int n = nums.size();
//     for(int i = 0; i < n - 2; i++){
//         if(i > 0 && nums[i] == nums[i - 1]) continue;
//         int left = i + 1, right = n - 1;
//         while(left < right){
//             int sum = nums[i] + nums[left] + nums[right];
//             if(sum == 0){
//                 result.push_back({nums[i], nums[left], nums[right]});
//                 while(left < right && nums[left] == nums[left + 1]) left++;
//                 while(left < right && nums[right] == nums[right - 1]) right--;
//                 left++;
//                 right--;
//             }
//             else if(sum < 0) left++;
//             else right--;
//         }
//     }
//     return result;
// }

// //3. using hashset method
// vector<vector<int>> threeSumSet(vector<int>& nums){
//     sort(nums.begin(), nums.end());
//     vector<vector<int>> result;
//     unordered_set<int> numSet;
//     int n = nums.size();
//     for(int i = 0; i < n - 2; i++){
//         int target = -nums[i];
//         for(int j = i + 1; j < n - 1; j++){
//             if(numSet.find(target - nums[j]) != numSet.end()){
//                 result.push_back({nums[i], nums[j], target - nums[j]});
//             }
//             numSet.insert(nums[j]);
//         }
//         numSet.clear();
//     }
//     return result;
// }
// int main() {
//     vector<vector<int>> res;
//     vector<int> nums = {-1, 0, 1, 2, -1, -4};
//     res = threeSum(nums);
//     for (int i = 0; i < res.size(); i++) {
//         for (int j = 0; j < res[i].size(); j++) {
//             cout << res[i][j] << " ";
//         }
//         cout << endl;
//     }
// }