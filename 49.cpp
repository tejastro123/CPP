// COMBINATION SUM PROBLEM

/* Given an array of distinct integers candidates and a target integer 
target, return a list of all unique combinations of candidates where the 
chosen numbers sum to target. You may return the combinations in any order.
The same number may be chosen from candidates an unlimited number of times. 
Two combinations are unique if the frequency of at least one of the chosen 
numbers is different.*/

#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

set<vector<int>> s;

void getallcomb(vector<int>& arr, int idx, int tar, vector<vector<int>>& ans,vector<int>&combin)
{
    int n = arr.size();
    if(idx== n || tar<0){
        return;
    }

    if(tar==0){
        if(s.find(combin)==s.end()){
            ans.push_back(combin);
            s.insert(combin);
        }
        return;
    }

    combin.push_back(arr[idx]);
    //single
    getallcomb(arr,idx+1,tar-arr[idx],ans,combin);
    //multiple
    getallcomb(arr,idx,tar-arr[idx],ans,combin);
    combin.pop_back();

    //exclusion
    getallcomb(arr,idx+1,tar,ans,combin);
}

vector<vector<int>> combinationSum(vector<int>& arr, int target)
{
    sort(arr.begin(),arr.end()); // sort the array for efficient search
    vector<vector<int>> ans;
    vector<int> combin;
    getallcomb(arr, 0, target, ans, combin);
    return ans;
}

int main(){
    vector<int> nums = {2,3,6,7};
    int target = 7;
    vector<vector<int>> result = combinationSum(nums, target);
    for(auto subset: result){
        for(int num: subset)
            cout << num << " ";
        cout << endl;
    }
    return 0;
}