// // permutations of array/string

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// // function to print permutations

// void getPerms(vector<int>&nums, int idx, vector<vector<int>>&ans){
//     int n = nums.size();
//     if(idx == n){
//         ans.push_back(nums);
//         return;
//     }
//     for(int i=idx; i<n; i++){
//         swap(nums[idx], nums[i]);
//         getPerms(nums, idx+1, ans);

//         swap(nums[idx], nums[i]); // backtrack
//     }

// }

// vector<vector<int>> permute(vector<int>& nums){
//     vector<vector<int>> ans;
//     sort(nums.begin(), nums.end());
//     getPerms(nums, 0, ans);
//     return ans;
//     // TC = O(n! * n)
//     // SC = O(n!)
// }

// int main(){
//     vector<int> nums = {1, 2, 3};
//     vector<vector<int>> ans = permute(nums);
//     for(auto& perm : ans){
//         for(int num : perm)
//             cout << num << " ";
//         cout << endl;
//     }
//     return 0;
// }