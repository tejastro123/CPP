// RECURSION :- BACKTRACKING 

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

//print all subsets 1

// void printSubsets(vector<int>& nums,vector<int>& result,int i){
//     int n = nums.size();
//     if(i == n){
//         for(int num : result){
//             cout<<num<<" ";
//         }
//         cout<<endl;
//         return;
//     }
//     //include
//     result.push_back(nums[i]);
//     printSubsets(nums,result,i+1);

//     result.pop_back(); //backtrack
//     //exclude
//     printSubsets(nums,result,i+1);

// }//TC = O(2^n * n)

// store subsets 1
// void storeSubsets(vector<int>& nums,vector<vector<int>>& subsets,int i,vector<int>& result){
//     int n = nums.size();
//     if(i == n){
//         subsets.push_back(result);
//         return;
//     }
//     //include
//     result.push_back(nums[i]);
//     storeSubsets(nums,subsets,i+1,result);

//     result.pop_back(); //backtrack
//     //exclude
//     storeSubsets(nums,subsets,i+1,result);

// }//TC = O(2^n * n) 


// subsets 2 (dupicate elements are present)
// void getallsubsets(vector<int>&nums,vector<int>&ans,int i,vector<vector<int> >&allsubsets){
//     int n = nums.size();
//     if(i == n){
//         allsubsets.push_back(ans);
//         return;
//     }
//     //include
//     ans.push_back(nums[i]);
//     getallsubsets(nums,ans,i+1,allsubsets);
//     ans.pop_back(); //backtrack

//     int idx = i+1;
//     while(idx < n && nums[idx] == nums[idx-1]) idx++;
//     //exclude
//     getallsubsets(nums,ans,idx,allsubsets);

// }

// vector<vector<int>> subsetswithdup(vector<int>& nums){
//     sort(nums.begin(),nums.end());
//     vector<vector<int>> allsubsets;
//     vector<int> ans;
//     getallsubsets(nums,ans,0,allsubsets);
//     return allsubsets;
// } // TC = O(2^n * n).


int main()
{
    // vector<int> nums = {1,2,3};
    // vector<int> result;
    // printSubsets(nums,result,0);
    // cout<<"\n";
    // vector<vector<int>> subsets; 
    // storeSubsets(nums,subsets,0,result);
    // for(auto subset : subsets){
    //     for(int num : subset){
    //         cout<<num<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // vector<int> nums = {1,2,2};
    // vector<vector<int>> subsets = subsetswithdup(nums);
    // for(auto subset : subsets){
    //     for(int num : subset){
    //         cout<<num<<" ";
    //     }
    //     cout<<endl;
    // }
    // return 0;

 
}