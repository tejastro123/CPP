//container with most water problem
/*You are given an integer array height of length n. 
There are n vertical lines drawn such that the two 
endpoints of the ith line are (i, 0) and (i, height[i]).
Find two lines that together with the x-axis form a 
container,such that the container contains the most water.
Return the maximum amount of water a container can store.
Notice that you may not slant the container.*/
//write cpp code

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int container(vector<int>& height) {
//     int n = height.size();
//     int left = 0, right = n - 1;
//     int max_area = 0;
    
//     while (left < right) {
//         int w = (right - left);
//         int ht = min(height[left], height[right]);
//         int currArea = ht * w;
//         max_area = max(max_area, currArea);

//         if (height[left] < height[right])
//             left++;
//         else 
//             right--;
//     }

//     return max_area;
// } O(n) best method is use to use two pointer approach

// int container(vector<int>& height){
//     int max_water = 0;
//     int n = height.size();
//     for(int i = 0; i < n; i++){
//         for(int j = i+1; j < n; j++){
//             int w = j-1;
//             int ht = min(height[i], height[j]);
//             int currWater = w*ht;
//             max_water = max(max_water, currWater);
//         }
//     }
//     return max_water;
// } O(n^2) not good approach

// int main() 
// {
//     vector<int> height = {1,8,6,2,5,4,8,3,7};
//     cout << maxArea(height) << endl;
//     vector<int> height = {1,8,6,2,5,4,8,3,7};
//     cout << container(height) << endl;
//     return 0;
// }