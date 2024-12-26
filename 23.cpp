//AGGRESSIVE COWS PROBLEM
/*Farmer John has built a new long barn, with N(2<=N<=100,000) 
stalls. The stalls are located along a straight line at 
positions x1 ... xN (0 <= xi <= 1,000,000,000).
His C (2 <= C <= N) cows don't like this barn layout and 
become aggressive towards each other once put into a stall. 
To prevent the cows from hurting each other, FJ wants to 
assign the cows to the stalls, such that the minimum 
distance between any two of them is as large as possible. 
What is the largest minimum distance?*/
//WRITE C++ CODE

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int isPossible(vector<int> &arr,int n,int c,int minAllowDist){
//     int cows=1, lastStallPos=arr[0];
//     for(int i=1;i<n;i++){
//         if(arr[i]-lastStallPos>=minAllowDist){
//             cows++;
//             lastStallPos=arr[i];
//         }
//         if(cows==c) return true;
//     }
//     return false;
// }

// int getDistance(vector<int> &arr, int n,int c){
//     sort(arr.begin(),arr.end()); //nlogn
//     int st=1,end=arr[n-1]-arr[0],ans=-1;
//     while(st<=end){
//         int mid=(st+end)/2;
//         if(isPossible(arr,n,c,mid)){//right
//             ans=mid;
//             st=mid+1;
//         }
//         else end = mid-1; //left
//     }
//     return ans;
// }

// int main()
// {
//     int n = 5, c = 3;
//     vector<int> arr = {1, 2, 0, 2, 1};
//     cout << getDistance(arr, n, c) << endl;
//     return 0;
// }