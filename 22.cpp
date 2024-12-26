//PAINRTER'S PARTITION 
/*There is fence which consists of wooden blocks with each 
block having a number written on it represented by an array 
.The painter is also given two numbers and.He is given the 
task to paint the fence using at most colors.But there are 
certain conditions which the painter must follow while 
painting:
He has to paint the fence in sequential manner from left 
to right i.e, first paint the first block then second 
block and so on without leaving any block not being painted. 
He will also use colors in sequential manner i.e, first 
paint with 1st color,then with 2nd color and so on. 
Note that he can paint any number of blocks sequentially 
with a single color and a color once used cannot be reused.
The sum of numbers written on blocks painted with same 
color must lie between and (both inclusive).The painter 
wants to know in how many ways can he paint the fence.
Since the answer can be large, find the answer modulo .*/

// n =no.of boards given in array form , m = no.of painters
/* Task is to find minimum time to paint all boards under 
the constraints that any painter will only paint continuous
sections of boards.*/
//WRITE CPP CODE

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// bool isPossible(vector<int> &arr, int n, int m, int maxAllowTime){
//     int painters = 1, time = 0;
//     for(int i = 0; i < n; i++){
//         if(time + arr[i] <= maxAllowTime){
//             time += arr[i];
//         }
//         else {
//             painters++;
//             time = arr[i];
//         }
//     }
//     return painters <= m;
// }
// int minTimeToPaint(vector<int> &arr, int n, int m){
//     int sum = 0, maxVal = INT_MIN;
//     for(int i = 0; i < n; i++){ //O(n)
//         sum += arr[i];
//         maxVal = max(maxVal, arr[i]);
//     }
//     int st = maxVal, end = sum, ans =-1;
//     while(st <= end){ //O(log(sum) * n)
//         int mid = (st + end) / 2;
//         if(isPossible(arr, n, m, mid)){//left
//             ans = mid;
//             end = mid - 1;
//         }
//         else{//right
//             st = mid + 1;
//         }
//     }
//     return ans;
// }
//TC of overall code: O(log(sum) * n)
// int main()
// {
//    vector<int> arr = {40,30,10,20};
//    int n = 4, m = 2;
//    cout<<minTimeToPaint(arr,n,m)<<endl;
// }