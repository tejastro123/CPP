// 4 sum
/*Given an array nums of n integers, return an array of all the unique 
quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:0 <= a, b, c, d < n.
a, b, c, and d are distinct.
nums[a] + nums[b] + nums[c] + nums[d] == target
You may return the answer in any order.
*/
// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<unordered_set>
// using namespace std;

// vector<vector<int>> foursum(vector<int> &nums , int tar){
//     sort(nums.begin(), nums.end());
//     int n = nums.size();
//     vector<vector<int>> ans;
//     for(int i=0;i<n;i++){
//         if(i>0 && nums[i] == nums[i-1]) continue;
//         for(int j=i+1;j<n;j++){
//             int p=j+1,q=n-1;
//             while(p < q){
//                 long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[p] + (long long)nums[q];
//                 if(sum < tar){
//                     p++;
//                 } else if(sum > tar){
//                     q--;
//                 } else { // sum == tar
//                     ans.push_back( {nums[i],nums[j],nums[p],nums[q]});
//                     p++; q--;
//                     while(p < q && nums[p] == nums[p-1]) p++;
//                 }
//             }
//             j++;
//             while(j < n && nums[j] == nums[j-1]) j++;
//         }
//     }
//     return ans;
// } 
// TC: O( nlogn + n^3)
// SC: O( unique quadruplets)

// int main()
// {
//     vector<int> nums = {1,0,-1,0,-2,2};
//     int tar = 0;
//     vector<vector<int>> ans = foursum(nums, tar);
//     for(auto &v : ans){
//         for(auto &i : v) cout << i << " ";
//         cout << endl;
//     }
//     return 0;
// }