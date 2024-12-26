//product of array
/*Given an integer array nums, return an array answer 
such that answer[i] is equal to the product of all the 
elements of nums except nums[i].*/

// #include<iostream>
// #include<vector>
// using namespace std;

//brute-force method O(n^2)
// vector<int> product(vector<int> nums){
//     int n = nums.size();
//     vector<int> ans(n, 1);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i!=j) ans[i]*= nums[j];
//         }
//     }
//     return ans;
// }

//optimized method TC:O(n)
// vector<int> product(vector<int> nums){
//     int n = nums.size();
//     vector<int> ans(n, 1);
//     vector<int> left(n, 1);
//     vector<int> right(n, 1);
       //left pdt
//     for(int i=1;i<n;i++){
//         left[i] = left[i-1]*nums[i-1];
//     }
       //right pdt
//     for(int i=n-2;i>=0;i--){
//         right[i] = right[i+1]*nums[i+1];
//     }
       //total pdt ans
//     for(int i=0;i<n;i++){
//         ans[i] = left[i]*right[i];
//     }
//     return ans;
// }

//space complexity will be O(1)
// vector<int> product(vector<int> nums){
//     int n = nums.size();
//     vector<int> ans(n, 1);
//     left=>ans
//     for(int i=1;i<n;i++){
//         ans[i] = ans[i-1]*nums[i-1];
//     }
//     int right=1;
//     right pdt
//     for(int i=n-2;i>=0;i--){
//         right *= nums[i+1];
//         ans[i] *= right;
//     }
//     return ans;
// }

// int main(){
//     vector<int> nums = {1,2,3,4};
//     vector<int> ans = product(nums);
//     int n = ans.size();
//     cout<<"[ ";
//     for(int i=0;i<n;i++){
//         cout<<ans[i]<<" ";
//     }
//     cout<<"]";
// }
