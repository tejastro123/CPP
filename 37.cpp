//TWO SUM
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

// 1.brute force O(n^2) code
vector<int>twoSumBruteForce(vector<int>& nums, int target){
    int n=nums.size();
    int first = 0, second = 0;
    int sum = 0;
    vector<int> ans ;
    for(int i=0;i<n;i++){
        first = nums[i];
        for(int j=i+1;j<n;j++){
            second = nums[j];
            sum = first + second;
            if(sum == target){
              ans = {i,j};
            }
        }
    }
    return ans ;
}

// 2.Better O(nlogn)
vector<int>twoSumBetter(vector<int>& nums, int target){
    sort(nums.begin(), nums.end());
    int st=0,end=nums.size();
    int sum=0;
    vector<int> ans ;

    while(st<end){
        sum = nums[st] + nums[end-1];
        if(sum == target){
            ans = {st, end-1};
            break;
        }
        else if(sum < target){
            st++;
        }
        else{
            end--;
        }
    }
    return ans ;
}

// 3.Optimized - hashing
vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int, int> map;
    int n = nums.size();
    vector<int> result;
    for(int i = 0; i < n ; i++){
        int first = nums[i];
        int sec = target - first;

        if(map.find(sec) != map.end()){
            result.push_back(map[sec]);
            result.push_back(i);
            break;
        }
        map[first] = i;
    }
    return result;
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result1 = twoSumBruteForce(nums, target);
    printf("The indices are: %d and %d\n", result1[0], result1[1]);
    vector<int> result2 = twoSumBetter(nums, target);
    printf("The indices are: %d and %d\n", result2[0], result2[1]);
    vector<int> result3 = twoSum(nums, target);
    printf("The indices are: %d and %d\n", result3[0], result3[1]);

    return 0;
}