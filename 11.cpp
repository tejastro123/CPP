//pair sum

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

//1.brute-force method
// vector<int> pairSum(vector<int>nums,int target){
//     vector<int> result;
//     int n = nums.size();
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(nums[i]+nums[j] == target){
//                 result.push_back(nums[i]);
//                 result.push_back(nums[j]);
//             }
//         }
//     }
// return result;
// }

//2.using two pointers method
// vector<int> pairSum(vector<int>nums,int target){
//     vector<int> result;
//     int n = nums.size();
//     int i = 0,j = n-1;
//     while(i<j){
//         int pair_sum = nums[i]+nums[j];
//         if(pair_sum > target){
//             j--;
//         }
//         else if(pair_sum < target){
//             i++;
//         }
//         else{
//             result.push_back(nums[i]);
//             result.push_back(nums[j]);
//         }
//     }
//     return result;
// }

// int main(){
//     vector<int> nums = {1,2,3,4,5,9,-2};
//     int target = 7;
//     vector<int> result = pairSum(nums,target);
//     int rsz=result.size();
//     cout<<"Pairs with sum "<<target<<" are: ";
//     for(int i=0;i<rsz;i+=2){
//         cout<<result[i]<<","<<result[i+1]<<" ";
//     }
//     return 0;
// }

//majority element

//1.brute-force method  ( o(n^2) )
//int majorityElement(vector<int>& nums) {
    // int n = nums.size();
    // for(int val : nums){
    //     int freq=0;
    //     for(int el : nums){
    //         if(el==val){
    //             freq++;
    //         }
    //     }
    //     if(freq> n/2){
    //         return val;
    //     }
    // }
    // return -1;
//}

//2.optimize sorting method ( o(nlogn) )
// int majorityElement(vector<int>& nums) {
//     sort(nums.begin(), nums.end());
//     int n = nums.size();
//     int freq=1, ans=nums[0];
//     for(int i=1;i<n;i++){
//         if(nums[i]==nums[i-1]){
//             freq++;
//         }
//         else{
//             freq=1;
//             ans=nums[i];
//         }
//         if(freq>n/2){
//             return ans;
//         }
//     }
//     return ans;

// }

//3. Moore's voting algorithm ( o(n) )
// int majorityElement(vector<int>& nums) {
//     int freq = 0, ans = 0;
//     int n=nums.size();
//     for(int i=0;i<n;i++){
//         if(freq == 0) {
//             ans = nums[i];
//         }
//         if(ans == nums[i]){
//             freq++;
//         }
//         else{
//             freq--;
//         }
//     }
//     return ans;
// }

// int main() {
//     vector<int> nums = {3,2,2,1,1,5,2};
//     int result = majorityElement(nums);
//     cout << "Majority Element: " << result << endl;
//     return 0;
// }
