//3 sum 
/*Given an integer array nums, return all the triplets [nums[i], nums[j], 
nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + 
nums[k] == 0.
Notice that the solution set must not contain duplicate triplets.*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
 
// 1.brute force method 
// vector<vector<int>> threesum(vector<int>& nums){  // TC: O( n^3 * log(unique triplets)) 
//                                                  // SC: (unique triplets)
//     int n = nums.size();
//     vector<vector<int>> ans;
//     set<vector<int>> s;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             for(int k=j+1;k<n;k++){
//                 int sum = nums[i] + nums[j] + nums[k];
//                 if(sum == 0){
//                     vector<int> triplet = {nums[i], nums[j], nums[k]};
//                     sort(triplet.begin(), triplet.end());

//                     if (s.find(triplet) == s.end()) {
//                         s.insert(triplet);
//                         ans.push_back(triplet);
//                     }
//                 }
//             }
//         }
//     }
//     return ans;
// }

// 2.hashing approach
// vector<vector<int>> threesumHash(vector<int>& nums){
//     int n = nums.size();
//     vector<vector<int>> ans;
//     set<vector<int>> uniquetriplets;
//     for(int i=0;i<n;i++){
//         int target = -nums[i];
//         set<int> set;
//         for(int j=i+1;j<n;j++){
//             int third = target - nums[j];
//             if(set.find(third) != set.end()){
//                 vector<int> triplet = {nums[i], nums[j], third};
//                 sort(triplet.begin(), triplet.end());
//                 uniquetriplets.insert(triplet);
//             }
//             set.insert(nums[j]);
//         }
//     }
//     ans.insert(ans.end(), uniquetriplets.begin(), uniquetriplets.end());
//     return ans;
// } 
// TC: O(n^2 * log(unique triplets))
// SC: O(n^2) for storing unique triplets in set

// 3. pointer approach
vector<vector<int>> threesum(vector<int>& nums){
    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    
    for(int i=0; i<n; i++){
        if(i>0 && nums[i] == nums[i-1]) continue;
        int j = i+1, k = n-1;
        while(j<k){
            int sum = nums[i] + nums[j] + nums[k];
            if(sum < 0){
                j++;
            } else if(sum > 0){
                k--;
            } else {
              ans.push_back({nums[i], nums[j],nums[k]});
              j++; k--;
              while(j<k && nums[j] == nums[j-1]) j++;
            }
        }
    }
    return ans;
}
// TC: O( nlogn + n^2 )
// SC: O( unique triplets)

int main(){
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = threesum(nums);

    for(auto triplet : ans){
        cout<<triplet[0]<<" "<<triplet[1]<<" "<<triplet[2]<<endl;
    }
    return 0;
}